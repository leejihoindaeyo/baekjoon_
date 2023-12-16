import sys

ency = {}
N, M = map(int, sys.stdin.readline().split())
for i in range(N):
    pokemon = sys.stdin.readline().rstrip()
    ency[i + 1] = pokemon
    ency[pokemon] = i + 1
for i in range(M):
    quest = sys.stdin.readline().rstrip()
    if quest.isdigit():
        print(ency[int(quest)])
    else:
        print(ency[quest])