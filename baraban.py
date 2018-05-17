#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Simple Bot to reply to Telegram messages.
This is built on the API wrapper, see echobot2.py to see the same example built
on the telegram.ext bot framework.
This program is dedicated to the public domain under the CC0 license.
"""
import os
import logging
import threading
import telegram
from telegram.error import NetworkError, Unauthorized
from time import sleep
try:
    import tg_settings
except:
    print("You have to create tg_settings.py. See tg_settings.py.example.")
    os.exit(1)
try:
    if os.environ["DRYRUN"]:
        from dryrun import Perdoliq
except:
    from main import Perdoliq

update_id = None


def main():
    """Run the bot."""
    global update_id
    # Telegram Bot Authorization Token
    TOKEN = tg_settings.TG_TOKEN
    bot = telegram.Bot(TOKEN)

    # get the first pending update_id,
    # this is so we can skip over it in case
    # we get an "Unauthorized" exception.
    try:
        update_id = bot.get_updates()[0].update_id
    except IndexError:
        update_id = None

    logging.basicConfig(level=logging.DEBUG)
    while True:
        try:
            handle_update(bot)
        except NetworkError:
            sleep(1)
        except Unauthorized:
            # The user has removed or blocked the bot.
            update_id += 1


def perdoliq(username, password, subj, test, acc, is_delayed):
    try:
        app = Perdoliq(username, password)
        app.auth()
        app.resolve(subj, test, acc, is_delayed=int(is_delayed))
    except Exception as e:
        return "Exception: " + str(e)


def list_test(username, password):
    try:
        app = Perdoliq(username, password)
        app.auth()
        return (app.get_tests())
    except Exception as e:
        return "Exception: " + str(e)


def handle_update(bot):
    """Echo the message the user sent."""
    global update_id
    # Request updates after the last update_id
    for update in bot.get_updates(offset=update_id, timeout=10):
        update_id = update.update_id + 1

        if update.message:
            # if there is and update, process it in threads
            t = threading.Thread(target=do_action, args=(update,))
            t.start()

def do_action(update):
    try:
        s = update.message.text.split()
    except:
        return 1
    if s[0] == '/resolve':
        if len(s) != 7:
            update.message.reply_markdown("Missing operand... Try again")
            update.message.reply_markdown("Usage: */resolve <user[text]> "\
                "<pass[text]> <subj[int]> <test[int]> "\
                "<accuracy[0-100]> <commit[1/0]>*")
            return False

        msg = "Please wait. If you have chosen commit=1, so test "\
                "going to be resolved in about 20 minutes and will "\
                "be commited automatically, otherwise it will take "\
                "about a 2 minutes and you have to "\
                "commit it by yourself.  Just wait. PS you have "\
                "chosen subj %s "\
                "test %s and accuracy %s" % (s[3], s[4], s[5])
        update.message.reply_text(msg)
        update.message.reply_photo(open('1516736368795.png', 'rb'))
        perdoliq(s[1], s[2], s[3], s[4], s[5], s[6])
        update.message.reply_text("It's done. Check your test because "\
                "i disclaim any responsibility.")
    elif s[0] == '/list':
        try:
            if len(s) == 3:
                update.message.reply_text("Fetching tests...")
                sleep(5)
                tests = list_test(s[1], s[2])
            else:
                update.message.reply_markdown("Usage: */list <user[text]>"\
                        " <pass[text]>*")
                return False
        except:
            update.message.reply_markdown("Usage: */list <user[text]>"\
                    " <pass[text]>*")
            return False
        msg = "Here is an available tests:\n``` "
        i = 0
        for subj in tests:
            msg = msg + (" [%s] %s\n" % (i, subj))
            i += 1
            j = 0
            for test in tests[subj]:
                msg = msg + ("     [%s] %s\n" % (j, test))
                j += 1
        update.message.reply_markdown(msg + "```\n Pay attention to "\
                "numbers in brackets \[..] *Here is subj and test numbers*")
    else:
        update.message.reply_markdown("Possible commands: */resolve, /list*")
        update.message.reply_markdown("Usage: */resolve <user[text]> "\
                "<pass[text]> <subj[int]> <test[int]> "\
                "<accuracy[0-100]> <commit[1/0]>*")
        update.message.reply_markdown("Usage: */list <user[text]> "\
                "<pass[text]>*")


if __name__ == '__main__':
    main()

