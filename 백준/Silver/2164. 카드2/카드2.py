import sys
from collections import deque

N = int(sys.stdin.readline())
lst = deque(range(1, N+1))

while(len(lst) > 1):
    lst.popleft()
    lst.append(lst[0])
    lst.popleft()

print(lst[0])