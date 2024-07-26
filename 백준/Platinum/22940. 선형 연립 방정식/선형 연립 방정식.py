def get_inverse(matrix):
    n = len(matrix)
    identity = [[float(i == j) for i in range(n)] for j in range(n)]

    for i in range(n):
        if matrix[i][i] == 0.0:
            for j in range(i + 1, n):
                if matrix[j][i] != 0.0:
                    matrix[i], matrix[j] = matrix[j], matrix[i]
                    identity[i], identity[j] = identity[j], identity[i]
                    break
        pivot = matrix[i][i]
        for k in range(n):
            matrix[i][k] /= pivot
            identity[i][k] /= pivot
        for j in range(n):
            if i != j:
                factor = matrix[j][i]
                for k in range(n):
                    matrix[j][k] -= factor * matrix[i][k]
                    identity[j][k] -= factor * identity[i][k]
    return identity

def matrix_multiply(A, B):
    result = [[0 for _ in range(len(B[0]))] for _ in range(len(A))]
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                result[i][j] += A[i][k] * B[k][j]
    return result

n = int(input().strip())  # 행렬의 크기

# 행렬 A와 B 초기화
A = []
B = []

# 입력받아 A와 B로 나누기
for _ in range(n):
    row = list(map(int, input().split()))
    A.append(row[:n])  # 첫 n 요소는 A의 행
    B.append([row[n]])   # 마지막 요소는 B의 요소

iA = get_inverse(A)
C = matrix_multiply(iA, B)

for c in C:
    print("{:.0f}".format(c[0]), end=" ")