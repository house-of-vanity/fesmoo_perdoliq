import requests
import settings
import logging
import re
from bs4 import BeautifulSoup
from random import randint
import time

logging.basicConfig(level=logging.INFO)


class Perdoliq:
    def __init__(self, username, password):
        self.password = password
        self.username = username
        self.SessionId = ''
        self.name = ''
        self.subjects = {}

    # make auth
    def auth(self):
        self.SessionId = '** DRY_RUN_ASP.NET_SessionId **'
        return self.SessionId

    # update and return list of subjs and tests
    def get_tests(self):
        self.subjects = {
            'Аналитическая химия': [
                'броматометрическое титрование',
                'Качественный анализ. Теоретические основы. Итоговый',
                'Химический количественный анализ. Итоговый', 'Йодометрия',
                'редоксиметрия. нитритометрия',
                'Количественный анализ. Протолитометрия.'
            ],
            'Безопасность жизнедеятельности, медицина катастроф': [
                'Мобилизационная подготовка здравоохранения',
                'Медицина катастроф', 'Гражданская оборона'
            ],
            'Биологическая химия': [
                'Химия белков', 'Ферменты', 'Витамины',
                'Нуклеиновые кислоты и матричные биосинтезы',
                'Обмен углеводов', 'Энергетический обмен'
            ],
            'Дисциплины по выбору Ф-04-1':
            ['физико-химические методы анализа'],
            'Иностранный язык': [
                'лексико-грамматический 9', 'Лексико-грамматический 8',
                'лексико-грамматический 10', 'лексико-грамматический 3а'
            ],
            'Органическая химия': [
                'Аминокислоты', 'Углеводы',
                'Карбоновые кислоты, гетерофункуциональные соединения',
                'Омыляемые липиды', 'Неомыляемые липиды',
                'Гетероциклические соединения'
            ],
            'Патология': [
                'Аллергия', 'Патология системы иммунобиологического надзора',
                'Нозология', 'Патология белкового обмена',
                'Патология обмена жиров', 'Патология углеводного обмена',
                'Патология водного и ионного обменов. Нарушение КОС.',
                'ЛИХОРАДКА', 'Кислородное голодание',
                'Патофизиология периферического кровобращения. Воспаление.'
            ],
            'Первая доврачебная помощь': ['Первая доврачебная помощь'],
            'Физическая культура': [
                'Методы контроля за функциональным и физическим состоянием организма человека'
            ],
            'Философия': [
                'Онтология. Гносеология', 'Западная философия 19-20вв-2',
                'Западная философия 19-20вв - 3', 'Онтология',
                'Научное познание - 2', 'Западная философия 19-20вв',
                'Философия истории', 'Философия человека - 1',
                'Философия человека - 2', 'Бытие и сознание',
                'Социальная философия - 1', 'Научное познание',
                'Философия человека', 'Онтология - 2',
                'Философия общества и глобальные проблемы человечества',
                'Русская философия'
            ]
        }
        return self.subjects

    def start_test(self, pred, test):
        
        return 30

    # predict answers for any question
    def predict(self, q_number):
        
        return ['2']

    # mark answers into requested question
    def answer(self, q_number, answers):
        return 0

    # commit test
    def finish_test(self):
        return 0

    def resolve(self, subj, test, accuracy, is_delayed=False):
        # renew auth
        self.auth()
        # get count of questions
        q_count = self.start_test(subj, test)

        def sleep_rand():
            delay = randint(20, 40)
            logging.info("Going to wait %s sec for this question." % delay)
            time.sleep(delay)

        accuracy = int(accuracy)
        # applying accuracy here. trying to make resulting
        # accuracy NO LESSthan requested.
        spoil_count = int(q_count - q_count * (accuracy / 100))
        if int(spoil_count / q_count * (-100) + 100) < accuracy:
            spoil_count -= 1
        # skip random `spoil_count` questions.
        # Choose questions which going to be skipped
        skip_this = []
        for i in range(0, spoil_count):
            skip_this.append(randint(1, q_count + 1))

        # start resolve test
        for i in range(1, q_count + 1):
            if is_delayed == True:
                sleep_rand()
            if i not in skip_this:
                prediction = self.predict(i)
                self.answer(i, prediction)

        # make autocommit
        if is_delayed == True:
            self.finish_test()
