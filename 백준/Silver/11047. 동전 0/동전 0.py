import sys; input = sys.stdin.readline
count = 0
cnt, maximum = map(int, input().split())
coins = [int(input()) for _ in range(cnt)]
coins.sort(reverse=True)

for coin in coins:
    if maximum >= coin:
        count += maximum // coin
        maximum %= coin
        if maximum <= 0:
            break

print(count)
