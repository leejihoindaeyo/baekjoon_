import sys

N, a = input().split()
N = int(N)
a = int(a)

lst = []
for i in range(1, N+1):
    if N % i == 0:
        lst.append(i)

if(a > len(lst)):
    print(0)
else:
    print(lst[a-1])