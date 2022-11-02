import sys

K = int(sys.stdin.readline())
numbers = []
for i in range(K):
    number = int(sys.stdin.readline())
    if number != 0:
        numbers.append(number)
    else:
        del numbers[-1]

sum = 0
for i in range(len(numbers)):
    sum += numbers[i]
print(sum)