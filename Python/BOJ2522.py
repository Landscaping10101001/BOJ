import sys

H , M  = map(int, sys.stdin.readline().split())
T = int(sys.stdin.readline())

sum = M + T
hour = sum // 60
minute = sum % 60

print((H + hour) % 24 , minute)