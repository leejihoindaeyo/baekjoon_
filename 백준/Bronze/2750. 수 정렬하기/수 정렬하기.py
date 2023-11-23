N = int(input())
lst = []
for i in range(N):
    a = int(input())
    lst.append(a)

for i in range(N):
    least = i
    for j in range(i + 1, N):
        if lst[j] < lst[least]:
            least = j
    lst[i], lst[least] = lst[least], lst[i]

for i in lst:
    print(i)
