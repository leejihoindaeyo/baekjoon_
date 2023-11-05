import sys

word = sys.stdin.readline()
char_count = {}

for ch in "abcdefghijklmnopqrstuvwxyz":
    char_count[ch] = 0

for ch in word:
    ch = ch.lower()
    if ch in char_count:
        char_count[ch] += 1

max_freq = 0
max_char = ''
multiple_max = False

for ch, freq in char_count.items():
    if freq > max_freq:
        max_freq = freq
        max_char = ch
        multiple_max = False
    elif freq == max_freq:
        multiple_max = True

if multiple_max:
    print("?")
else:
    print(max_char.upper())
