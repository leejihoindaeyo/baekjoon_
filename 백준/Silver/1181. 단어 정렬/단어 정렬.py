import sys

lst1 = set()
N = int(sys.stdin.readline())
for i in range(N):
    lst1.add(sys.stdin.readline().rstrip())

lst2 = list(lst1)
lst2.sort()
lst2.sort(key=len)

print(*lst2, sep="\n")