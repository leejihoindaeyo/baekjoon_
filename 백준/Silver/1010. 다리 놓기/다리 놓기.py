import sys; input = sys.stdin.readline
def factorial(n):
    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:
        return n * factorial(n - 1)

N = int(input())
for i in range(N):
    a, b = map(int, input().split())
    res = factorial(b) // (factorial(a) * factorial(b - a))
    print(res)