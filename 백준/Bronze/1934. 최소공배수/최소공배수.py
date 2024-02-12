import sys; input = sys.stdin.readline
import math

cnt = int(input())
for i in range(cnt):
    a, b = map(int, input().split())
    c = a * b // math.gcd(a, b)
    print(c)