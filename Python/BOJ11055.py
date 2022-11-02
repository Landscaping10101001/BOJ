A = int(input())
Ai = list(map(int,input().split()))
dp = [0] * A

for i in range(A):
    for j in range(i + 1,A):
        dp[i]