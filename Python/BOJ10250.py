Testcase = int(input())

for i in range(Testcase):
    floor , room , visitor = map(int,input().split())
    num = 0

    for j in range(1 , room + 1):

        if num == visitor:
            j -= 1
            break
        
        for k in range(1 , floor + 1):
            num += 1

            if num == visitor:
                break
            
    print(k * 100 + j)