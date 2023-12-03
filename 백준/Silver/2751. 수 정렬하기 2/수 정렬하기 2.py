import sys
lst = []
N = int(sys.stdin.readline())
for i in range(N):
    a = int(sys.stdin.readline().rstrip())
    lst.append(a)
lst.sort()
print(*lst)