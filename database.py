import datetime as dt

class DataBase:
    def __init__(self, basefile, scheme):
        import sqlite3
        self.scheme = ''
        try:
            self.conn = sqlite3.connect(basefile, check_same_thread=False)
        except:
            print('Could not connect to DataBase.')
            return None
        with open(scheme, 'r') as scheme_sql:
            sql = scheme_sql.read()
            self.scheme = sql
            if self.conn is not None:
                try:
                    cursor = self.conn.cursor()
                    cursor.executescript(sql)
                except:
                    print('Could not create scheme.')
            else:
                print("Error! cannot create the database connection.")
        print('DB created.')

    def execute(self, sql):
        cursor = self.conn.cursor()
        cursor.execute(sql)
        self.conn.commit()
        return cursor.fetchall()

    def update_user(self, user_name, user_id):
        date = int(dt.datetime.now().strftime("%s"))
        sql = """INSERT OR IGNORE INTO 
        users('user_id', 'user_name', 'date') 
        VALUES ('%s','%s','%s')""" % (
            user_id,
            user_name,
            date
        )
        self.execute(sql)

