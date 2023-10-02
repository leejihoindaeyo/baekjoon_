
count = int(input())
# n = 1일 때 1개 / n = 2일 때 2개 / n = 3일 때 100 001 111 3개 / n = 4일 때 5개 => 피보나치?
tile = [0] * 1000001
tile[1] = 1
tile[2] = 2
for i in range(3, count+1):
    tile[i] = (tile[i - 1] + tile[i - 2]) % 15746
print(tile[count])

