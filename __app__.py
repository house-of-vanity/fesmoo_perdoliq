from main import Main

username = '4016014'
password = '40201'

app = Main(username, password)

app.auth()
app.get_tests()
#print(app.start_test(3, 0))

while True:
    q = input('Subj >>> ')
    a = input('Test >>> ')
    app.resolve(int(q),int(a))
    #q = input('Q >>> ')
    #a = input('A >>> ')
    #z = [a]
    #app.answer(q, z)
    
