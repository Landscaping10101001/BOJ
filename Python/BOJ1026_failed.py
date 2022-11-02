N = int(input())
A = list(map(int,input().split())) #1 1 1 6 0
B = list(map(int,input().split())) #2 7 8 3 1
sorted_A = sorted(A) #0 1 1 1 6
sorted_B = sorted(B) #1 2 3 7 8
sorted_B.reverse() #8 7 3 2 1
new_sorted_A = []

for i in B:
    pos = sorted_B.index(i)
    new_pos = sorted_A[pos]
    new_sorted_A.append(new_pos)

sum = 0
for i in range(N):
    sum += new_sorted_A[i] * B[i]

print(sum)
"""
실패 이유:
B를 재배열 하지 말아야 한다는 점을 간과하였다.
B.sort()가 아닌 sorted(B)로 정렬한 값을 다른 변수에 저장하면서 B자체를 재배열한 것이 아니기에 조건에 부합한다고 판단해 틀렸다.

배운점:
B.sort는 NONE값을 반환해 다른 변수에 저장이 불가하지만 sorted(B)는 다른 변수에 저장 가능하다.
"""