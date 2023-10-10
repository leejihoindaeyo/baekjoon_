import sys
T = int(sys.stdin.readline())
top = -1
stack = []
for i in range(T):
    command = sys.stdin.readline().split()
    if command[0] == '1':
        stack.append(command[1])
    elif command[0] == '2':
        if stack:
            print(stack.pop())
        else:
            print(-1)
    elif command[0] == '3':
        print(len(stack))
    elif command[0] == '4':
        if not stack:
            print(1)
        else:
            print(0)
    elif command[0] == '5':
        if not stack:
            print(-1)
        else:
            print(stack[-1])
