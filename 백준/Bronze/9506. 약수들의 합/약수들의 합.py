def complete_num(N):
    lst = []
    sum = 0
    if N == -1:
        exit()
    else:
        for i in range(1, N + 1):
            if N % i == 0:
                lst.append(i)
        for i in range(len(lst) - 1):
            sum += lst[i]
        if sum == N:
            print(N, "= ", end="")
            for i in range(len(lst) - 2):
                print(lst[i], "+", end=" ")
            print(lst[len(lst) - 2])
        else:
            print(N, "is NOT perfect.")

while(True):
    N = int(input())
    complete_num(N)

