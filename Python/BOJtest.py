import sys

N , Q = map(int, sys.stdin.readline().split())
a = []
for i in range(Q):
    a.append(map(int, sys.stdin.readline().split()))

fibo = [0 for i in range(N)]

fibo[0] = 0

fibo[1] = 1

for i in range(0,N):

    if i==0:

        print('0')

    elif i==1:

        print('1')

    else:

        fibo[i] = fibo[i-1] + fibo[i-2]

        print(fibo[i])