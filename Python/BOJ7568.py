N = int(input())

weight = []
tall = []

for i in range(0,N):
    x , y = map(int,input().split())
    weight.append(x)
    tall.append(y)

for i in range(0,N):
    rank = 1
    for j in range(0,N):
        if weight[i] < weight[j] and tall[i] < tall[j]:
            rank += 1
    print(rank,end = " ")