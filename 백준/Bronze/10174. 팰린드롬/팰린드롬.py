import sys

def Palindrome(s):
    s = s.upper()
    stack = []
    for char in s:
        stack.append(char)
    for char in s:
        if stack.pop() != char:
            return False
    return True

T = int(sys.stdin.readline())
for i in range(T):
    str = sys.stdin.readline().strip()
    if Palindrome(str):
        print("Yes")
    else:
        print("No")



# 6
# Nat tan
# Palindrome
# 123454321
# Dogs and Cats
# **()()**
# 1 221







