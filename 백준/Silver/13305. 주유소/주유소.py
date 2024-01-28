# 기름값이 비싼 데에서 조금 넣고 싼 데에서 많이 넣기
# 처음에는 무조건 넣기
# 기름값이 비싸면 앵꼬나기 전까지, 싸면 끝까지 갈 때 까지 다 넣기
import sys; input = sys.stdin.readline

city = int(input())
distance = list(map(int, input().split()))
oil = list(map(int, input().split()))

res = distance[0] * oil[0]
dist = 0
minimum = oil[0]

for i in range(1, city - 1):
    if oil[i] < minimum:
        minimum = oil[i]
        res += oil[i] * dist
        dist = distance[i]
    else:
        dist += distance[i]

    if i == city - 2:
        res += minimum * dist

print(res)
