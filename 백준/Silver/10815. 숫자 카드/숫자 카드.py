s_card_lst = set()
N = int(input())
s_card = input().split()
for card in s_card:
    s_card_lst.add(int(card))

m_card_lst = []
M = int(input())

m_card = list(map(int, input().split()))
m_card_lst.extend(m_card)

find_card = [0] * len(m_card_lst)
for i in range(len(m_card_lst)):
    if m_card_lst[i] in s_card_lst:
        find_card[i] += 1

print(*find_card, sep=" ")
