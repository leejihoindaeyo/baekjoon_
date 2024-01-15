import sys; input = sys.stdin.readline

a = int(input())
x = 64
cnt = 0
while x > 0:
    if x > a:
        x = x // 2
    else:
        cnt += 1
        a -= x

print(cnt)
