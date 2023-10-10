while True:
    stack = []  # 입력 문자열마다 스택 초기화
    string = input()
    if string == ".":
        break
    for token in string:
        if token == "(" or token == "[":
            stack.append(token)
        elif token == ")":
            if len(stack) != 0 and stack[-1] == "(":
                stack.pop()
            else:
                stack.append(")")
        elif token == "]":
            if len(stack) != 0 and stack[-1] == "[":
                stack.pop()
            else:
                stack.append("]")
    else:
        if len(stack) == 0:
            print("yes")
        else:
            print("no")

if stack:
    print("no")
