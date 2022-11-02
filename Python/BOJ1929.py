import sys

N , M = map(int, sys.stdin.readline().split())
numbers = [1] * (M + 1)
numbers[0] , numbers[1] = 0 , 0

prime_number_start = 2
for i in range(2, M + 1):
    if numbers[i]:
        for j in range(i * 2, M + 1, i):
            numbers[j] = 0

for i in range(N, M  + 1):
    if numbers[i] == 1:
        print(i)