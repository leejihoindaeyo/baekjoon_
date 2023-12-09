import sys

N = int(sys.stdin.readline())
lst = []
for i in range(N):
    a, b = map(int, sys.stdin.readline().split())
    lst.append((a, b))

lst.sort(key=lambda x: (x[1], x[0]))
for i in lst:
    print(i[0], i[1])