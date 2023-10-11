import sys

T1 = int(sys.stdin.readline())
A = set(sys.stdin.readline().split())
T2 = int(sys.stdin.readline())
B = sys.stdin.readline().split()

for i in B:
    if i in A:
        print(1)
    else:
        print(0)
