import sys; input = sys.stdin.readline

lst = []
word = input().strip()
for i in range(1, len(word) - 1):
    for j in range(i+1, len(word)):
        a = ''.join(reversed(word[0:i]))
        b = ''.join(reversed(word[i:j]))
        c = ''.join(reversed(word[j:]))
        d = a + b + c
        lst.append(d)
lst.sort()
print(lst[0])
