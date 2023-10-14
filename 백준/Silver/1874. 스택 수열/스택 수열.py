T = int(input())
stack = []
copy_stack = []
a = 1
pos = 1
for i in range(1, T+1):
    num = int(input())
    while (a <= num):
        stack.append(a)
        copy_stack.append("+")
        a += 1
    if stack[-1] == num:
        stack.pop()
        copy_stack.append("-")
    else:
        pos = 0
        print("NO")
        break

if(pos == 1):
    for i in copy_stack:
        print(i)












