import sys

N = int(sys.stdin.readline())
numbers = list(map(int, sys.stdin.readline().split()))

a = [1] * 1001
a[0] = 0
a[1] = 0
prime_number = 2

while prime_number < 1001:
    for i in range(prime_number + 1, 1001):
        if i % prime_number == 0:
            a[i] = 0
        else:
            continue
    prime_number += 1

count = 0
for i in numbers:
    if a[i] == 1:
        count += 1

print(count)