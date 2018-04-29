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
                settings.scam_data, {
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
            for tag in soup.find_all(re.compile("ctl00_MainContent_ASPxCallbackPanel1_ASPxListBox2_LBI\dT0")):
                print(tag.name)
