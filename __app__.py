from main import Main
import configparser
import random

config = configparser.ConfigParser()


def input_line():
    allah = [
        '>>>'
    ]
    return allah[random.randint(0, len(allah)-1)]

def act(q):
    if (q == 'h') or (q== 'help'):
        print('''I don't know how to help you...
`list` - list all test
`resolve <Subj> <Test>`
''')
    elif q == 'list':
        list_all()
    elif q[:7] == 'resolve':
        q = q.split(' ')
        print(q[1], q[2])
        if len(q) != 3:
            print('''Specify Subj number and Test number. 
List it with `list` command
example:
resolve 4 1''')
            return 1
        app.resolve(int(q[1]), int(q[2]), accuracy)

def list_all():
    i = 0
    for subj in app.subjects:
        print("[%s] %s" % (i, subj))
        i += 1
        j = 0
        for test in app.subjects[subj]:
            print("\t[%s] %s" % (j, test))
            j += 1
      
try:
    config.read("creds.ini")
    username = config['creds']['user']
    password = config['creds']['pass']
    accuracy = config['mics']['accuracy']
except:
    print("Couldn't find appropriate config file. Let's create new.")
    print("Provide credentials for fesmu.ru/eport/eport/ below")

    username = input('User ID  %s ' % input_line())
    password = input('Password %s ' % input_line())
    config['creds'] = {}
    config['creds']['user'] = username
    config['creds']['pass'] = password
    print("Also you are able to set desired level of accuracy in percent (%).")
    accuracy = int(input('Accuracy %s ' % input_line()))
    while (accuracy < 0) or (accuracy > 100):
        print("Are you stupid? Try again.")
        accuracy = int(input('Accuracy %s ' % input_line()))
    config['mics'] = {}
    config['mics']['accuracy'] = str(accuracy)
    with open('creds.ini', 'w') as configfile:
        config.write(configfile)

app = Main(username, password)

app.auth()
app.get_tests()

print('''
You are in bot command line engine.
Type h or help for help.
''')

while True:
    q = input('Command %s ' % input_line())

    act(q)
