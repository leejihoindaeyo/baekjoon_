from sys import stdin
from collections import deque

T= int(stdin.readline())
Queue = deque([])
for i in range(T):
    A = stdin.readline().split()

    if A[0] == 'push':
        Queue.append(A[1])

    elif A[0] == 'pop':
        if Queue:
            print(Queue.popleft())
        else:
            print(-1)

    elif A[0] == 'size':
        print(len(Queue))

    elif A[0] == 'empty':
        if len(Queue) == 0:
            print(1)
        else:
            print(0)

    elif A[0] == 'front':
        if len(Queue) == 0:
            print(-1)
        else:
            print(Queue[0])

    elif A[0] == 'back':
        if len(Queue) == 0:
            print(-1)
        else:
            print(Queue[-1])