fesmu_root_url = 'http://www.fesmu.ru/eport/eport/'


def merge(x, y):
    z = x.copy()  # start with x's keys and values
    z.update(y)  # modifies z with y's keys and values & returns None
    return z


scam_data_1 = {
    'ctl00$MainContent$UserText':
    '',
    'ctl00$MainContent$PassText':
    '',
    '__EVENTTARGET':
    '',
    'ctl00_MainContent_ToolkitScriptManager1_HiddenField':
    '',
    '__EVENTARGUMENT':
    '',
    '__VIEWSTATE':
    '/wEPDwUKLTQ4NzYwNDEzOQ9kFgJmD2QWAgIDD2QWAgIBD2QWAgIFDw8WAh4EVGV4dAU/0KHQtdC50YfQsNGBINC/0L7Qu9GM0LfQvtCy0LDRgtC10LvQtdC5INC90LAg0L/QvtGA0YLQsNC70LU6IDI3ZGQYAQUeX19Db250cm9sc1JlcXVpcmVQb3N0QmFja0tleV9fFgQFHWN0bDAwJE1haW5Db250ZW50JEFTUHhCdXR0b24xBR1jdGwwMCRNYWluQ29udGVudCRBU1B4QnV0dG9uMwUdY3RsMDAkTWFpbkNvbnRlbnQkQVNQeEJ1dHRvbjIFHWN0bDAwJE1haW5Db250ZW50JEFTUHhCdXR0b240UKid19jR9/BwYJ38PlfAuTBp+Uzf293yX1YKxRuGOwU=',
    '__VIEWSTATEGENERATOR':
    '73D4C735',
    '__EVENTVALIDATION':
    '/wEdAAdNVwQOOnBLF+XCfUz1/WyqUN0eEH6RAZcaSKVdt8S4X7osef1mutGT26WuFCdWwFYhaXIQoXEs7lyT4XozQ4OInWK1mn7aEBNhVaP9v76fJNxRJK/kVxlULg0AsW337/IhsIAW9IW5kv7Tf6wiSWjxg3zGz2OD5sbWFNEoFylrnnGelA7yCE4KHy7DzyQ2uf0=',
    'ctl00$MainContent$ASPxButton2':
    '',
    'ctl00$MainContent$TextBox3':
    '',
    'ctl00$MainContent$TextBox4':
    '',
    'DXScript':
    '1_42,1_75,2_27'
}

scam_data_2 = {
    'ctl00_MainContent_ToolkitScriptManager1_HiddenField':
    '',
    '__EVENTTARGET':
    '',
    '__EVENTARGUMENT':
    '',
    '__VIEWSTATE':
    '/wEPDwULLTE3NjQ0Njk1MzYPZBYCZg9kFgICAw9kFgJmD2QWAgIJD2QWBAIDD2QWAmYPZBYCZg9kFgJmD2QWAgIBDxQrAAUPFgIeD0RhdGFTb3VyY2VCb3VuZGdkZGQ8KwAHAQYPZBAWAgIBAgIWAhQrAAEWAh4PQ29sVmlzaWJsZUluZGV4ZhQrAAEWAh8BAgFkFgBkAgcPZBYCZg9kFgJmD2QWAmYPZBYCAgEPFCsABWRkZDwrAAcBBg9kEBYCZgIBFgIUKwABFgIfAWYUKwABFgIfAQIBZBYAZBgBBR5fX0NvbnRyb2xzUmVxdWlyZVBvc3RCYWNrS2V5X18WAwUdY3RsMDAkTWFpbkNvbnRlbnQkQVNQeEJ1dHRvbjcFHWN0bDAwJE1haW5Db250ZW50JEFTUHhCdXR0b24xBR1jdGwwMCRNYWluQ29udGVudCRBU1B4QnV0dG9uOL71BMGK5LGuFoieB2pc2OORpg/477guTu+aq9j1FDB7',
    '__VIEWSTATEGENERATOR':
    '847F47AD',
    'ctl00$MainContent$hfTest':
    '-1',
    'ctl00_MainContent_ASPxCallbackPanel1_ASPxListBox2DeletedItems':
    '',
    'ctl00_MainContent_ASPxCallbackPanel1_ASPxListBox2InsertedItems':
    '',
    'ctl00_MainContent_ASPxCallbackPanel1_ASPxListBox2CustomCallback':
    '',
    'ctl00$MainContent$ASPxCallbackPanel1$ASPxListBox2':
    'System.Data.DataRowView',
    'ctl00_MainContent_ASPxCallbackPanel2_ASPxListBox3DeletedItems':
    '',
    'ctl00_MainContent_ASPxCallbackPanel2_ASPxListBox3InsertedItems':
    '',
    'ctl00_MainContent_ASPxCallbackPanel2_ASPxListBox3CustomCallback':
    '',
    'ctl00$MainContent$ASPxCallbackPanel2$ASPxListBox3':
    '',
    'DXScript':
    '1_42,1_75,2_27,2_34,2_40,1_41,2_36',
    '__CALLBACKID':
    'ctl00$MainContent$ASPxCallbackPanel2',
    '__CALLBACKPARAM':
    'c0:',
    '__EVENTVALIDATION':
    '/wEdAAdJe/IodYZPo1MYmga2VNNOI7ZJDWlRgaefdPW8BTEVtXw+ikVKJJfrT0ndBbXKBTA39nUTQDb0GEkh6LDT5SpRsAIaIhbklmBqr8w+PxD292wBCiQy8HT9gxcspUtWdqpbDCDdUSb6jcSCho5zpwlS5fp1BGkKOATquDwoQUIst0axsj2qJ2rkYBJm8oFR9hc=',
}

scam_data_3 = {
    'ctl00_MainContent_ToolkitScriptManager1_HiddenField':
    '',
    '__EVENTTARGET':
    '',
    '__EVENTARGUMENT':
    '',
    '__VIEWSTATE':
    '/wEPDwULLTE3NjQ0Njk1MzYPZBYCZg9kFgICAw9kFgJmD2QWAgIJD2QWBAIDD2QWAmYPZBYCZg9kFgJmD2QWAgIBDxQrAAUPFgIeD0RhdGFTb3VyY2VCb3VuZGdkZGQ8KwAHAQYPZBAWAgIBAgIWAhQrAAEWAh4PQ29sVmlzaWJsZUluZGV4ZhQrAAEWAh8BAgFkFgBkAgcPZBYCZg9kFgJmD2QWAmYPZBYCAgEPFCsABWRkZDwrAAcBBg9kEBYCZgIBFgIUKwABFgIfAWYUKwABFgIfAQIBZBYAZBgBBR5fX0NvbnRyb2xzUmVxdWlyZVBvc3RCYWNrS2V5X18WAwUdY3RsMDAkTWFpbkNvbnRlbnQkQVNQeEJ1dHRvbjcFHWN0bDAwJE1haW5Db250ZW50JEFTUHhCdXR0b24xBR1jdGwwMCRNYWluQ29udGVudCRBU1B4QnV0dG9uOL71BMGK5LGuFoieB2pc2OORpg/477guTu+aq9j1FDB7',
    '__VIEWSTATEGENERATOR':
    '847F47AD',
    '__EVENTVALIDATION':
    '/wEdAAdJe/IodYZPo1MYmga2VNNOI7ZJDWlRgaefdPW8BTEVtXw+ikVKJJfrT0ndBbXKBTA39nUTQDb0GEkh6LDT5SpRsAIaIhbklmBqr8w+PxD292wBCiQy8HT9gxcspUtWdqpbDCDdUSb6jcSCho5zpwlS5fp1BGkKOATquDwoQUIst0axsj2qJ2rkYBJm8oFR9hc=',
    'ctl00_MainContent_ASPxCallbackPanel1_ASPxListBox2DeletedItems':
    '',
    'ctl00_MainContent_ASPxCallbackPanel1_ASPxListBox2InsertedItems':
    '',
    'ctl00_MainContent_ASPxCallbackPanel1_ASPxListBox2CustomCallback':
    '',
    'ctl00$MainContent$ASPxCallbackPanel1$ASPxListBox2':
    'System.Data.DataRowView',
    'ctl00_MainContent_ASPxCallbackPanel2_ASPxListBox3DeletedItems':
    '',
    'ctl00_MainContent_ASPxCallbackPanel2_ASPxListBox3InsertedItems':
    '',
    'ctl00_MainContent_ASPxCallbackPanel2_ASPxListBox3CustomCallback':
    '',
    'ctl00$MainContent$ASPxCallbackPanel2$ASPxListBox3':
    'System.Data.DataRowView',
    'ctl00$MainContent$ASPxButton1':
    '',
    'DXScript':
    '1_42,1_75,2_27,2_34,2_40,1_41,2_36',
}