import sys

input = sys.stdin.readline
a = int(input())
arr1 = [list(map(int, input().split())) for _ in range(a)]
arr2 = [list(map(int, input().split())) for _ in range(a)]

# 부울 행렬 곱 함수
def boolean_matrix_multiply(A, B):
    n = len(A)
    result = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] |= (A[i][k] & B[k][j])
    return result

# 두 행렬의 부울 곱
boolean_product = boolean_matrix_multiply(arr1, arr2)

# 결과 행렬에서 1인 요소의 수 세기
cnt = 0
for i in range(a):
    for j in range(a):
        if boolean_product[i][j] == 1:
            cnt += 1

print(cnt)
