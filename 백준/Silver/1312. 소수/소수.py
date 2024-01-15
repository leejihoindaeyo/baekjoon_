import sys; input = sys.stdin.readline

A, B, C = map(int, input().split())
for i in range(C):
    A = (A % B) * 10
    result =  A // B
print(result)