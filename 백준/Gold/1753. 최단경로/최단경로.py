import sys
import heapq

input = sys.stdin.readline
V, E = map(int, input(). split())
start_node = int(input())
graph = [[]for i in range(V+1)]

INF = sys.maxsize
dist = [INF] * (V + 1)
heap = []

def dijkstra(start):
    dist[start_node] = 0
    heapq.heappush(heap,(0, start))

    while heap:
        weight, now = heapq.heappop(heap)
        if dist[now] < weight:
            continue
        for wei, next_node in graph[now]:
            next_wei = wei + weight
            if next_wei < dist[next_node]:
                dist[next_node] = next_wei
                heapq.heappush(heap, (next_wei, next_node))

for j in range(E):
    u, v, w = map(int, sys.stdin.readline().split())
    graph[u].append((w, v))

dijkstra(start_node)
for i in range(1, V+1):
    if dist[i] == sys.maxsize:
        print("INF")
    else:
        print(dist[i])

