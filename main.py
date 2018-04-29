import requests
import settings
import logging
import re
from bs4 import BeautifulSoup

logging.basicConfig(level=logging.INFO)


class Main:
    def __init__(self, username, password):
        self.password = password
        self.username = username
        self.SessionId = ''
        self.name = ''
        self.subjects = {}

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
                    'ctl00$MainContent$TextBox1': self.username,
                    'ctl00$MainContent$TextBox2': self.password,
                }),
            cookies={'ASP.NET_SessionId': self.SessionId})

        r = requests.get(
            settings.fesmu_root_url + 'startstu.aspx',
            cookies={'ASP.NET_SessionId': self.SessionId})
        soup = BeautifulSoup(r.text, "html.parser")
        _p = re.compile(',.*$')
        self.name = _p.sub(
            '', soup.find(id="ctl00_MainContent_Label1").get_text())[14:]
        logging.info('Current user is %s', self.name)

    def get_tests(self):
        r = requests.get(
            settings.fesmu_root_url + 'studtst1.aspx',
            cookies={'ASP.NET_SessionId': self.SessionId})
        soup = BeautifulSoup(r.text, "html.parser")
        # parse subjects
        for subject in soup.find_all(class_="dxeListBoxItem_Aqua dxeFTM"):
            if subject.get_text() != '\xa0':
                self.subjects.update({subject.get_text(): []})
                logging.info('Found subject %s', subject.get_text())
        logging.info('Found %s subjects', len(self.subjects))
        # parse tests per subject
        i = 0
        for subject in self.subjects:
            r = requests.post(
                settings.fesmu_root_url + 'studtst1.aspx',
                data=settings.merge(settings.scam_data_2,
                                    {'ctl00$MainContent$hfPred': i}),
                cookies={'ASP.NET_SessionId': self.SessionId})
            soup = BeautifulSoup(r.text, "html.parser")
            for test in soup.find_all(class_="dxeListBoxItem_Aqua dxeLTM"):
                if test.get_text() != '\xa0':
                    self.subjects[subject].append(test.get_text())
                    logging.info('%s - Found test %s' % (subject,
                                                         test.get_text()))
            i += 1

        #print(self.subjects)

    def start_test(self, pred, test):
        # start test
        r = requests.post(
            settings.fesmu_root_url + 'studtst1.aspx',
            data=settings.merge(
                settings.scam_data_3, {
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
        q=[]
        for i in _a.find_all(id=re.compile("ctl00_MainContent_ASPxButton.*_B")):
            q.append(i)
        return(len(q))