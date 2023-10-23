import sys
n = int(input()) #피연산자 개수
fix = input() #후위 표기식 집어넣기
num_lst = [0] * n
for i in range(n):
    num_lst[i] = int(input())

stack = []

for i in fix:
    if i >= 'A' and i <= 'Z':
        stack.append(num_lst[ord(i)-ord('A')])
    else:
        val2 = stack.pop()
        val1 = stack.pop()

        if i == '+':
            stack.append(val1 + val2)
        elif i == '-':
            stack.append(val1 - val2)
        elif i == '*':
             stack.append(val1 * val2)
        elif i == '/':
            if val2 == 0:
                 print("division by 0")
            stack.append(val1 / val2)

print('%.2f' %stack[0])