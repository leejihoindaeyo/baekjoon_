import sys
stack = []
max = 0
count = 0
T = int(sys.stdin.readline())
for i in range(T):
    stick = int(sys.stdin.readline())
    stack.append(stick)
for i in reversed(range(T)):
    if stack[i] > max:
        max = stack[i]
        count += 1
print(count)

