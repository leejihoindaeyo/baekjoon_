import sys
n = int(sys.stdin.readline())
num = n
cnt = 0
while True:
    a = num // 10
    b = num % 10
    c = (a + b) % 10
    num = (10 * b) + c
    cnt += 1
    if num == n:
        break
print(cnt)