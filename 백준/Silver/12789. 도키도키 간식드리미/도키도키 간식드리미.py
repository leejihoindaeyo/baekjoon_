import sys; input = sys.stdin.readline
count = int(input())
person = list(map(int, input().split()))
stack = []
target = 1

while person:
    if person[0] == target:
        person.pop(0)
        target += 1
    else:
        stack.append(person.pop(0))
    while stack:
        if stack[-1] == target:
            stack.pop()
            target += 1
        else:
            break

if not stack:
    print('Nice')
else:
    print('Sad')