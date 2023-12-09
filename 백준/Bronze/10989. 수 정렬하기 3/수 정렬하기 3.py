import sys

lst = [0] * 10001
N = int(sys.stdin.readline())
for i in range(N):
    M = int(sys.stdin.readline().rstrip())
    lst[M] += 1

for i in range(10001):
    if lst[i] != 0:
        for j in range(lst[i]):
            print(i)