import sys; input = sys.stdin.readline
from datetime import datetime

def leapyear(year):
    if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
        return True
    else:
        return False
year1, month1, day1 = map(int, input().split())
year2, month2, day2 = map(int, input().split())

date1 = datetime(year1, month1, day1)
date_tmp = datetime(year1+1000, month1, day1)
date2 = datetime(year2, month2, day2)

diff = abs((date1-date2).days)
if date2 >= date_tmp:
    print("gg")
else:
    print(f"D-{diff}")