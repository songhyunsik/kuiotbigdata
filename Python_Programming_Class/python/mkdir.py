import os
import random
os.mkdir("log")

if not os.path.isdir("log"):
    os.mkdir("log")

if not os.path.exists("log/count_log.txt"):
    with open("log/count_log.txt", "w", encoding="utf8") as f:
        f.write("기록이 시작됩니다.\n")

with open("log/count_log.txt", "a", encoding=:utf8)
