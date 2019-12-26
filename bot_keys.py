#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Simple Bot to reply to Telegram messages.
This is built on the API wrapper, see echobot2.py to see the same example built
on the telegram.ext bot framework.
This program is dedicated to the public domain under the CC0 license.
"""
import os
import sys
import logging
import threading
from telegram import *
from telegram.ext import Updater, CommandHandler, CallbackQueryHandler
from telegram.error import NetworkError, Unauthorized
from time import sleep
from functools import wraps

from pprint import pprint
try:
    TOKEN = os.environ["TG_TOKEN"]
except:
    print("You have to set env var TG_TOKEN with bot token.")
    sys.exit(1)
try:
    if os.environ["DRYRUN"]:
        from dryrun import Perdoliq
except:
    from main import Perdoliq

logging.basicConfig(format='%(asctime)s - %(name)s - %(levelname)s - %(message)s',
                    level=logging.INFO)
LOG = logging.getLogger(__name__)

auth = dict()

cached_tests = dict()

def main():
    """Run bot."""
    updater = Updater(TOKEN, use_context=True)
    dp = updater.dispatcher
    dp.add_handler(CallbackQueryHandler(button_handler))
    dp.add_handler(CommandHandler("login", login,
                                  pass_args=True,
                                  pass_job_queue=True,
                                  pass_chat_data=True))
    dp.add_handler(CommandHandler("list", list_,
                                  pass_args=True,
                                  pass_job_queue=True,
                                  pass_chat_data=True))
    # log all errors
    dp.add_error_handler(error)
    updater.start_polling()
    updater.idle()

def error(update, context):
    """Log Errors caused by Updates."""
    LOG.warning('Update "%s" caused error "%s"', update, context.error)

def is_authorized(id_):
    def decorator(f):
        @wraps(f)
        def wrapped(*args, **kwargs):
            if args[0].effective_user.id not in auth:
                LOG.info(
                        "User %s (%s) is new user. Redirecting to login.",
                        args[0].effective_user.first_name, 
                        args[0].effective_user.id)
                return login_first(*args, **kwargs)
            ret = f(*args, **kwargs)
            return ret
        return wrapped
    return decorator

def login_first(update, context):
    msg =   "Необходимо авторизоваться. "\
            "Авторизация будет сохранена  "\
            "до момента перезагрузки бота. Пример: /login <user> <pass>"
    try:
        update.message.reply_text(msg)
    except:
        query = update.callback_query
        query.edit_message_text(msg)
    LOG.info("Going to login")

def login(update, context):
    user_id = update.effective_user.id
    message = update.message.text.split()
    if len(message) == 3:
        login = message[1]
        passwd = message[2]
        auth[user_id] = dict()
        auth[user_id]["login"] = login
        auth[user_id]["passwd"] = passwd
        update.message.reply_text("Учетные данные сохранены.")
    elif len(message) == 2 and message[1] == 'status':
        if user_id in auth:
            update.message.reply_text(
                    "Вы авторизованы с данными: {} : {}***\n"\
                    "Для обновления данных авторизуйтесь повторно.".format(
                    auth[user_id]["login"],
                    auth[user_id]["passwd"][0:2]))
        else:
            update.message.reply_text("Вы еще не авторизованы.")
    else:
        update.message.reply_text("Запрет! Попытка взлома! Делай так: "\
                "/login <user> <pass> или /login status")


def perdoliq(username, password, subj, test, acc, submit=True, is_delayed=False):
    try:
        app = Perdoliq(username, password)
        app.auth()
        app.resolve(subj, test, acc, submit, is_delayed)
    except Exception as e:
        return "Exception: " + str(e)

def list_test(username, password):
    if username in cached_tests:
        return cached_tests[username]
    try:
        app = Perdoliq(username, password)
        app.auth()
        tests = app.get_tests()
        cached_tests[username] = tests
        return tests
    except Exception as e:
        return "Exception: " + str(e)

@is_authorized('list_')
def list_(update, context):
    query = update.callback_query
    user_id = update.effective_user.id
    tests = list_test(auth[user_id]["login"], auth[user_id]["passwd"])
    print(tests)
    keyboard = list()
    i = 1
    for subj in tests:
        tests_count = len(tests[subj])
        #msg = msg + (" [%s] %s (%s tests)\n" % (i, subj, tests_count))
        keyboard.append([InlineKeyboardButton(f"{i}. {subj}", callback_data=f"s_{i}")])
        i += 1
    keyboard.append([InlineKeyboardButton("Close", callback_data="subj")])
    reply_markup = InlineKeyboardMarkup(keyboard)
    update.message.reply_text('Чо будем хакать?', reply_markup=reply_markup)

@is_authorized('button_handler')
def button_handler(update, context):
    query = update.callback_query
    user_id = update.effective_user.id
    tests = list_test(auth[user_id]["login"], auth[user_id]["passwd"])
    if query.data.split('_')[0] == 'close':
        query.edit_message_text('Пака братишка')
    if query.data.split('_')[0] == 's': # subj
        data = query.data
        subj_num = query.data.split('_')[1]
        keyboard = list()
        subj_name = None
        j = 1 # subj number
        i = 1 # test number
        for subj in tests:
            LOG.debug("Checking: %s. %s is %s", subj, j, subj_num)
            if j != int(subj_num):
                j += 1
                continue
            else:
                LOG.info("Found needed subj: %s", subj)
                subj_name = subj
                for test in tests[subj]:
                    LOG.info("Found test: %s", test)
                    keyboard.append([
                        InlineKeyboardButton(f"{i}. {test}",
                        callback_data=f"t_{i}_{data}")])
                    i += 1
                break
        keyboard.append([InlineKeyboardButton("Закрыть", callback_data=f"close")])
        reply_markup = InlineKeyboardMarkup(keyboard)
        query.edit_message_text(
                f"Ok, решаем {subj_name}, а какой тест?",
                reply_markup=reply_markup)

    if query.data.split('_')[0] == 't': # test
        data = query.data
        keyboard = [[], []]
        in_a_row = 4
        for p in range(0, 101, 5):
            if len(keyboard[-1]) == in_a_row:
                keyboard.append(list())
            keyboard[-1].append(InlineKeyboardButton(f"{p}", callback_data=f"p_{p}_{data}"))

        keyboard.append([InlineKeyboardButton("Закрыть", callback_data=f"close")])
        reply_markup = InlineKeyboardMarkup(keyboard)
        query.edit_message_text("Ok, а какая точность?", reply_markup=reply_markup)

    if query.data.split('_')[0] == 'm': # autosubmit
        data = query.data
        keyboard = [[
            InlineKeyboardButton(f"Быстро", callback_data=f"d_0_{data}"),
            InlineKeyboardButton(f"С задержками", callback_data=f"d_1_{data}"),]]
        keyboard.append([InlineKeyboardButton("Закрыть", callback_data=f"close")])
        reply_markup = InlineKeyboardMarkup(keyboard)
        query.edit_message_text(
                "Решить тест быстро или с задержками, типа я думал над ответом.",
                reply_markup=reply_markup)

    if query.data.split('_')[0] == 'p': # precision 
        data = query.data
        keyboard = [[
            InlineKeyboardButton(f"Завершить", callback_data=f"m_1_{data}"),
            InlineKeyboardButton(f"Не завершать", callback_data=f"m_0_{data}"),]]
        keyboard.append([InlineKeyboardButton("Close", callback_data=f"close")])
        reply_markup = InlineKeyboardMarkup(keyboard)
        query.edit_message_text(
                "Завершить тест автоматически после решения или оставить для проверки?",
                reply_markup=reply_markup)

    if query.data.split('_')[0] == 'd': # is_delayed
        data = query.data
        LOG.info(data)
        # d_0_m_1_p_100_t_1_s_10
        subj = query.data.split('_')[9]
        test = query.data.split('_')[7]
        precision = query.data.split('_')[5]
        submit = bool(int(query.data.split('_')[3]))
        delay = bool(int(query.data.split('_')[1]))
        query.edit_message_text(
                "Опять работа... "\
                "Пока я решаю тест ЗАПРЕЩЕНО "\
                "пользоваться сайтом с тестами. "\
                "Резултат будет испорчен.")
        perdoliq(
                auth[user_id]["login"],
                auth[user_id]["passwd"],
                int(subj)-1,
                int(test)-1,
                precision,
                submit,
                delay)

if __name__ == '__main__':
    try:
      main()
    except Exception as e:
      LOG.error("%s", e)
      pass
