import sys

N = int(sys.stdin.readline())
numbers = []

for i in range(N):
    numbers.append(list(map(int, sys.stdin.readline().split())))

numbers.sort()

for i in range(N):
    print(numbers[i][0], numbers[i][1])