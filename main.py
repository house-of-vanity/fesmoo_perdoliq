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
        r = requests.get(settings.fesmu_root_url)
        for c in r.cookies:
            if c.name == 'ASP.NET_SessionId':
                self.SessionId = c.value
                logging.info('ASP.NET_SessionId for curtain session is %s',
                             c.value)

        r = requests.post(
            settings.fesmu_root_url,
            data=settings.merge(
                settings.scam_data_1, {
                    'ctl00$MainContent$UserText': self.username,
                    'ctl00$MainContent$PassText': self.password,
                }),
            cookies={'ASP.NET_SessionId': self.SessionId})
        r = requests.get(
            settings.fesmu_root_url + 'startstu.aspx',
            cookies={'ASP.NET_SessionId': self.SessionId})
        soup = BeautifulSoup(r.text, "html.parser")
        #print("****** ", soup)
        _p = re.compile(',.*$')
        self.name = _p.sub(
            '', soup.find(id="ctl00_MainContent_Label1").get_text())[14:]
        logging.info('Current user is %s', self.name)

        return self.SessionId

    # update and return list of subjs and tests
    def get_tests(self):
        r = requests.get(
            settings.fesmu_root_url + 'studtst1.aspx',
            cookies={'ASP.NET_SessionId': self.SessionId})
        soup = BeautifulSoup(r.text, "html.parser")
        # parse subjects
        for subject in soup.find_all(class_="dxeListBoxItem_Aqua dxeFTM"):
            if subject.get_text() != '\xa0':
                self.subjects.update({subject.get_text(): []})
                logging.debug('Found subject %s', subject.get_text())
        logging.info('Found %s subjects', len(self.subjects))
        # parse tests per subject
        i = 0
        for subject in self.subjects:
            logging.info('Found subject %s' % subject)
            r = requests.post(
                settings.fesmu_root_url + 'studtst1.aspx',
                data=settings.merge(settings.scam_data_2,
                                    {'ctl00$MainContent$hfPred': i}),
                cookies={'ASP.NET_SessionId': self.SessionId})
            soup = BeautifulSoup(r.text, "html.parser")
            for test in soup.find_all(class_="dxeListBoxItem_Aqua dxeLTM"):
                if test.get_text() != '\xa0':
                    logging.info('\tFound test %s for subject %s' % (test.get_text(), subject))
                    self.subjects[subject].append(test.get_text())
                    logging.debug('%s - Found test %s' % (subject,
                                                          test.get_text()))
            i += 1

        return self.subjects

    def start_test(self, pred, test):
        # start test
        r = requests.post(
            settings.fesmu_root_url + 'studtst1.aspx',
            data=settings.merge(settings.scam_data_3, {
                'ctl00$MainContent$hfPred': pred,
                'ctl00$MainContent$hfTest': test
            }),
            cookies={'ASP.NET_SessionId': self.SessionId})
        # get test content
        r = requests.get(
            settings.fesmu_root_url + 'studtst2.aspx',
            cookies={'ASP.NET_SessionId': self.SessionId})
        soup = BeautifulSoup(r.text, "html.parser")
        _a = soup.find(class_='btntest')
        q = []
        for i in _a.find_all(
                id=re.compile("ctl00_MainContent_ASPxButton.*_B")):
            q.append(i)
        logging.info("Started subj %s, test %s" % (pred, test))
        return (len(q))

    # predict answers for any question
    def predict(self, q_number):
        # select question. just load its page.
        answers = []

        def parse(html):
            a = []
            soup = BeautifulSoup(html, "html.parser")
            # find all correct answer
            for i in soup.find_all(
                    'span',
                    attrs=
                {
                    'style':
                    'display:inline-block;background-color:'\
                    'Aquamarine;font-size:Medium;width:860px;'
                }):
                logging.debug(
                    'Predicting answer for question #%s - %s | Answer number - %s'
                    % (q_number, i.text, i.get('id')[-1:]))
                a.append(int(i.get('id')[-1:]))
            return a

        requests.post(
            settings.fesmu_root_url + 'studtst2.aspx',
            data=settings.merge(
                settings.scam_data_4,
                {'ctl00$MainContent$ASPxButton' + str(q_number): ''}),
            cookies={'ASP.NET_SessionId': self.SessionId})
        # send all checkboxes as answer
        requests.post(
            settings.fesmu_root_url + 'studtst3.aspx',
            data=settings.scam_data_5,
            cookies={'ASP.NET_SessionId': self.SessionId})
        # get page with answers
        r = requests.get(
            settings.fesmu_root_url + 'studtst5.aspx',
            cookies={'ASP.NET_SessionId': self.SessionId},
            headers={'User-Agent': 'Mozilla/1337'})
        answers = parse(r.text)
        if len(answers) == 0:
            logging.debug(
                "There isn't any correct answers for %s. Looks like"\
                " something went wrong. Trying other way...", q_number
            )
            # send all checkboxes as answer to 30th page (4 answers questions)
            requests.post(
                settings.fesmu_root_url + 'studtst2.aspx',
                data=settings.merge(
                    settings.scam_data_4,
                    {'ctl00$MainContent$ASPxButton' + str(q_number): ''}),
                cookies={'ASP.NET_SessionId': self.SessionId})

            requests.post(
                settings.fesmu_root_url + 'studtst30.aspx',
                data=settings.scam_data_7,
                cookies={'ASP.NET_SessionId': self.SessionId})
            # get page with answers
            r = requests.get(
                settings.fesmu_root_url + 'studtst5.aspx',
                cookies={'ASP.NET_SessionId': self.SessionId},
                headers={'User-Agent': 'Mozilla/1337'})
            answers = parse(r.text)

        logging.info("Prediction for question %s. Answers numbers - %s" %
                     (q_number, answers))
        return answers

    # mark answers into requested question
    def answer(self, q_number, answers):
        def gen_a(a_count, answers):
            a = {}
            for i in range(1, a_count + 1):
                if i in answers:
                    a['ctl00$MainContent$ASPxCheckBox' + str(i)] = 'C'
                    a['ctl00$MainContent$hfo' + str(i)] = '1'
                else:
                    a['ctl00$MainContent$ASPxCheckBox' + str(i)] = 'U'
                    a['ctl00$MainContent$hfo' + str(i)] = '0'
            return a

        if len(answers) == 0:
            logging.warning("Incorrect answers count. Expected [1-5] got 0.")
            return 1

        # select question. just post to its page.
        requests.post(
            settings.fesmu_root_url + 'studtst2.aspx',
            data=settings.merge(
                settings.scam_data_4,
                {'ctl00$MainContent$ASPxButton' + str(q_number): ''}),
            cookies={'ASP.NET_SessionId': self.SessionId})
        # mark and send correct answers
        r = requests.post(
            settings.fesmu_root_url + 'studtst3.aspx',
            data=settings.merge(settings.scam_data_6, gen_a(5, answers)),
            cookies={'ASP.NET_SessionId': self.SessionId})

        if r.url == settings.fesmu_root_url + 'studtst30.aspx':
            requests.post(
                settings.fesmu_root_url + 'studtst2.aspx',
                data=settings.merge(
                    settings.scam_data_4,
                    {'ctl00$MainContent$ASPxButton' + str(q_number): ''}),
                cookies={'ASP.NET_SessionId': self.SessionId})
            r = requests.post(
                settings.fesmu_root_url + 'studtst30.aspx',
                data=settings.merge(settings.scam_data_8, gen_a(4, answers)),
                cookies={'ASP.NET_SessionId': self.SessionId})

        logging.info("Send correct answer for %s. It's %s" % (q_number,
                                                              answers))

    # commit test
    def finish_test(self):
        requests.post(
            settings.fesmu_root_url + 'studtst2.aspx',
            data=settings.scam_data_9,
            cookies={'ASP.NET_SessionId': self.SessionId})
        requests.post(
            settings.fesmu_root_url + 'studtst4.aspx',
            data=settings.scam_data_10,
            cookies={'ASP.NET_SessionId': self.SessionId})

    def resolve(self, subj, test, accuracy=100, submit=False, is_delayed=False):
        # renew auth
        logging.info(
                f"Resolving subj {subj}, test {test}, acc {accuracy}, submit {submit}, delay {is_delayed}")
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
        if submit == True:
            self.finish_test()
