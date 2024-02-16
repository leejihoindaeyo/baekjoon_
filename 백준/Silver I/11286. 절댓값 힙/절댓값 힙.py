# x에 뭐를 넣는다
# 입력값이 0이 아니면 힙에 넣고, 입력값이 0이 절댓값이 가장 작은 수 out, 여러 개면 가장 작은 수
import sys; input = sys.stdin.readline
import heapq
from collections import deque

max_heap = [] # 음수 담을 거
min_heap = [] # 양수 담을 거

n = int(input())
for i in range(n):
    x = int(input())
    if x > 0:
        heapq.heappush(min_heap, x)
    elif x < 0:
        heapq.heappush(max_heap, -x)
    else:
        if min_heap:
            if max_heap:
                if min_heap[0] < max_heap[0]:
                    print(heapq.heappop(min_heap))
                else:
                    print(-heapq.heappop(max_heap))
            else:
                print(heapq.heappop(min_heap))
        elif max_heap:
            print(-heapq.heappop(max_heap))
        else:
            print(0)



