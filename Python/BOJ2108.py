import sys

N = int(input())
num = []
table = [0] * 8001

for i in range(N):
    num.append(int(sys.stdin.readline()))

#산술평균
sum = 0
for i in range(N):
    sum += num[i]

print(round(sum / N))

#중앙값
sorted_num = sorted(num)
print(sorted_num[N // 2])

#최빈값
for i in num:
    table[i + 4000] += 1

if table.count(max(table)) != 1:
    table[table.index(max(table))] = 0
    print(table.index(max(table)) - 4000)

else:
    print(table.index(max(table)) - 4000)

#범위
print(max(num) - min(num))

"""
실패 이유:
산술평균을 구하는 부분에서 sum // N으로 사용해 틀렸다. 예제 상에서는 모두 맞는것으로 나와 틀렸다는 사실을 파악하지 못하였다

해결방법:
round 함수를 이용하여 반올림을 해주었다.
round 함수는 가장 가까운 정수를 반환하는 함수이다. 예를 들어 0.2면 0을 반화하고 0.7이면 1을 반환하게 된다.
"""