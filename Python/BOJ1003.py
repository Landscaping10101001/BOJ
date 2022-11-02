import sys

test_case = int(input())
pibonachi_numbers = []
table = [[0] * 2 for i in range(41)]

for i in range(test_case):
    N = pibonachi_numbers.append(int(sys.stdin.readline().rstrip()))

table[0] = [1, 0]
table[1] = [0, 1]

for i in range(2, 41):
    table[i][0] = table[i - 1][0] + table[i - 2][0]
    table[i][1] = table[i - 1][1] + table[i - 2][1]

for i in pibonachi_numbers:
    print(table[i][0] , table[i][1])