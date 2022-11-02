H , M = map(int,input().split())
if (M >44):
    print(H , M-45)
elif (H == 0 and M < 45):
    print(23 , 15+M)
else:
    print(H-1 , 15+M)