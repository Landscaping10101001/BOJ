testcase = int(input())

for i in range(testcase):
    A , B = input().split()
    A = int(A)
    B = str(B)
    for j in B:
        print(A * j,end = "")
    print()