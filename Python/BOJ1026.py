N = int(input())
A = list(map(int,input().split())) #1 1 1 6 0
B = list(map(int,input().split())) #2 7 8 3 1
sum = 0

for i in range(N):
    sum += min(A) * max(B)
    A.pop(A.index(min(A)))
    B.pop(B.index(max(B)))

print(sum)