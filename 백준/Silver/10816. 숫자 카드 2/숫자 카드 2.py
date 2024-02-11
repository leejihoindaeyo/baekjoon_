import sys; input = sys.stdin.readline

A = int(input())
A_lst = list(map(int, input().split()))

B = int(input())
B_lst = list(map(int, input().split()))

cnt = {}
for i in A_lst:
    if i in cnt:
        cnt[i] += 1
    else:
        cnt[i] = 1

for i in B_lst:
    if i in cnt:
        print(cnt[i], end= " ")
    else:
        print(0, end= " ")

