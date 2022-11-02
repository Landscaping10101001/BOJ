N = int(input())
A = list(map(int,input().split()))
X , Y = map(int,input().split())
new_A = []

for i in A:

    if i >= Y:
        
        new_A.append(i)

tkdeo = int(N * (X / 100))
wjfeo = int(len(new_A))
print(tkdeo , wjfeo)