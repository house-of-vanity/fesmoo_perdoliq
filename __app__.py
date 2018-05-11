from main import Main
import configparser
import random

config = configparser.ConfigParser()


# just parse user input and make proper action
def act(q):
    if (q == 'h') or (q == 'help'):
        print('''
`list` - list all test
`resolve <Subj> <Test>`
''')
    elif q == 'list':
        list_all()
    elif q[:7] == 'resolve':

        # chance to override accuracy
        global accuracy
        accuracy_new = input('Accuracy level [%s]: ' % accuracy)
        if accuracy_new != '':
            try:
                accuracy = int(accuracy_new)
            except:
                pass

        # set delay if needed
        is_delayed = input(
            'Wait random time per question and auto commit? [y/N]: ')
        if is_delayed == 'y' or is_delayed == 'Y':
            is_delayed = True
        else:
            is_delayed = False

        q = q.split(' ')
        if len(q) != 3:
            print('''Specify Subj number and Test number. 
List it with `list` command
example:
resolve 4 1''')
            return 1
        app.resolve(int(q[1]), int(q[2]), accuracy, is_delayed=is_delayed)


def list_all():
    i = 0
    for subj in app.subjects:
        print("[%s] %s" % (i, subj))
        i += 1
        j = 0
        for test in app.subjects[subj]:
            print("\t[%s] %s" % (j, test))
            j += 1


# read config. in case of missing config create new one.
try:
    config.read("creds.ini")
    username = config['creds']['user']
    password = config['creds']['pass']
    accuracy = int(config['mics']['accuracy'])
except:
    print("Couldn't find appropriate config file. Let's create new.")
    print("Provide credentials for fesmu.ru/eport/eport/ below")

    username = input('User ID  %s ' % '>>>')
    password = input('Password %s ' % '>>>')
    config['creds'] = {}
    config['creds']['user'] = username
    config['creds']['pass'] = password
    print("Also you are able to set desired level of accuracy in percent (%).")
    accuracy = int(input('Accuracy %s ' % '>>>'))
    while (accuracy < 0) or (accuracy > 100):
        print("Are you stupid? Try again.")
        accuracy = int(input('Accuracy %s ' % '>>>'))
    config['mics'] = {}
    config['mics']['accuracy'] = str(accuracy)
    with open('creds.ini', 'w') as configfile:
        config.write(configfile)

app = Main(username, password)

# make auth
app.auth()
# update tests
app.get_tests()

print('''
You are in bot command line engine.
Type h or help for help.
''')

while True:
    q = input('Command %s ' % '>>>')
    act(q)
