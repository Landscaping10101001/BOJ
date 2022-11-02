import sys

N = int(sys.stdin.readline())
a = {}

numbers = list(map(int, sys.stdin.readline().split()))

reduced_numbers = set(numbers)

reduced_and_sorted_numbers = sorted(reduced_numbers)

for i in range(len(reduced_and_sorted_numbers)):
    a[reduced_and_sorted_numbers[i]] = i

for i in numbers:
    print(a.get(i), end = " ")