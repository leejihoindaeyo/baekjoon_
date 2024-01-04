import sys
from itertools import permutations

input = sys.stdin.readline
lst = []
N, M = map(int, input().split())
for i in range(1, N + 1):
    lst.append(i)


for i in permutations(lst, M):
    for num in i:
        print(num, end= " ")
    print()