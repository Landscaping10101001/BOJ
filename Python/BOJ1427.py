number = list(input())
sorted_number = sorted(number)
reversed_number = reversed(sorted_number)
number_length = len(number)

for i in reversed_number:
    print(i, end = "")