import sys
T = int(sys.stdin.readline())
for i in range(T):
    p = sys.stdin.readline()
    stack = []
    for j in p:
        if j == '(':
            stack.append(j)
        elif j == ')':
            if stack:
                stack.pop()
            else:
                print("NO")
                break
        else:
            if not stack:
                print("YES")
            else:
                print("NO")

