import sys

T = int(sys.stdin.readline())
s = list(sys.stdin.readline().strip())
copy_stack = []
count = 0

for i in s:
    if (i == "L" or i == "S"):
        copy_stack.append(i)
    elif i == "K":
        if "S" in copy_stack:
            copy_stack.remove("S")
            count = count + 1
        else:
            break
    elif i == "R":
        if "L" in copy_stack:
            copy_stack.remove("L")
            count = count + 1
        else:
            break
    else:
        count = count + 1
print(count)
