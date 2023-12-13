import sys

setA = set()
setB = set()

N, M = map(int, sys.stdin.readline().split())
setA.update(input().split())
setB.update(input().split())

setC = setA - setB
setD = setB - setA

print(len(setC) + len(setD))