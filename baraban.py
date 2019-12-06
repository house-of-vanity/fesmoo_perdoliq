#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Simple Bot to reply to Telegram messages.
This is built on the API wrapper, see echobot2.py to see the same example built
on the telegram.ext bot framework.
This program is dedicated to the public domain under the CC0 license.
"""
import os
import sys
import logging
import threading
from time import sleep
from main import Perdoliq


def main():
    list_test('4016014', '40403')


def perdoliq(username, password, subj, test, acc, is_delayed):
    try:
        app = Perdoliq(username, password)
        app.auth()
        app.resolve(subj, test, acc, is_delayed=int(is_delayed))
    except Exception as e:
        return "Exception: " + str(e)


def list_test(username, password):
    try:
        app = Perdoliq(username, password)
        app.auth()
        return (app.get_tests())
    except Exception as e:
        return "Exception: " + str(e)


if __name__ == '__main__':
    try:
      main()
    except:
      pass
