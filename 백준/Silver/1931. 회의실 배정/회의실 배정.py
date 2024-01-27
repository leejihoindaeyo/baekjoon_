import sys; input = sys.stdin.readline
meeting = []
cnt = int(input())

for i in range(cnt):
    start, end = map(int, input().split())
    meeting.append((start, end))

meeting.sort(key=lambda x : (x[1], x[0]))

count = 0
end_time = 0
for s, e in meeting:
    if s >= end_time:
        count += 1
        end_time = e

print(count)