import sys

com = {}
N = int(sys.stdin.readline())
for i in range(N):
    name, gogo = sys.stdin.readline().split()
    if gogo == 'enter':
        com[name] = 'enter'
    else:
        if com[name]:
            del com[name]

for i in sorted(com, reverse=True):
    print(i)