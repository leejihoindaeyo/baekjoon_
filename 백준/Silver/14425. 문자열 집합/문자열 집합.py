N, M = map(int, input().split())
setA = set()
lstB = list()
resC = list()
for i in range(N):
    a = input()
    setA.add(a)
for i in range(M):
    b = input()
    lstB.append(b)

cnt = 0
for i in lstB:
    if i in setA:
        cnt += 1

print(cnt)