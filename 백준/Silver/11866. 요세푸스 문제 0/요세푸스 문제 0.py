from collections import deque
n, k = map(int, input().split())

queue = deque()
lst = []

for i in range(1, n+1):
    queue.append(i)

while queue:
    for i in range(k-1):
        queue.append(queue.popleft())
    lst.append(queue.popleft())

print("<", end ='')
for i in range(len(lst) - 1):
    print("%d, "%lst[i], end = '')
print(lst[-1], end='')
print(">")


