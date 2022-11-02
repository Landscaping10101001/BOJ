N , X = map(int,input().split())
a = list(map(int,input().split()))

for i in a:
    if X > i:
        print(i,end = " ")