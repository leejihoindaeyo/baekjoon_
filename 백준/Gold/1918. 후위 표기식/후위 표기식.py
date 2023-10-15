import sys
eq = list(sys.stdin.readline().rstrip())
stack = []
output = ""

for token in eq:
    if token.isalpha():
        output += token
    elif token == '(':
        stack.append(token)
    elif token == ')':
        while stack and stack[-1] != '(':
            output += stack.pop()
        stack.pop()
    elif token == '*' or token == '/':
        while stack and (stack[-1] == '*' or stack[-1] == '/'):
            output += stack.pop()
        stack.append(token)
    elif token == '+' or token == '-':
        while stack and stack[-1] != '(':
            output += stack.pop()
        stack.append(token)

while stack:
    output += stack.pop()

print(output)


