from main import Main


username='4016014'
password='40201'

app = Main(username, password)

app.auth()
app.get_tests()
print(app.start_test(3,0))