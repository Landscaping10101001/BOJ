import sys
M = int(sys.stdin.readline().rstrip())
A = [0]
sum = 0
xor = 0

for i in range(M):
    query = list(map(int,input().split()))
    if  query[0] == 1:
        A.append(query[1])
        sum += query[1]
        xor = xor^query[1]

    elif query[0] == 2:
        A.remove(query[1])
        sum -= query[1]
        xor = xor^query[1]

    elif query[0] == 3:
        print(sum)
        
    elif query[0] == 4:
        print(xor)