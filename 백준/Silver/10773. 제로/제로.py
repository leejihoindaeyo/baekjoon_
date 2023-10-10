import sys
T = int(sys.stdin.readline())
stack = []
sum_price = 0

for i in range(T):
    price = int(sys.stdin.readline())
    if price == 0:
        stack.pop()
    else:
        stack.append(price)

print(sum(stack))
