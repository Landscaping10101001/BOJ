N = int(input())
score = list(map(int,input().split()))
max = max(score)
NewScore = 0

for i in range(N):
    #print(score[i] / max * 100)
    NewScore = NewScore + score[i] / max * 100

#print(NewScore)
print(NewScore / N)