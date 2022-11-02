L = int(input())
string = input()
r = 31
M = 1234567891
sum = 0

for i in range(L):
    sum += (ord(string[i]) - 96) * (r ** i)

print(sum % 1234567891)