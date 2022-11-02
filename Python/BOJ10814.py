import sys

N = int(sys.stdin.readline())
data = []

for i in range(N):
    age , name = sys.stdin.readline().split()
    age = int(age)
    data.append([age , name])

sorted_data = sorted(data, key = lambda x:x[0])

for i,j in sorted_data:
    print(i , j)

"""
실패 이유:
lambda함수를 이용해 나이순 정렬을 하려 하였지만 age 변수의 입력이 string으로 입력되어 int형식과 정렬 방식이 달라 예제는 맞는 것처럼 보이지만 다른 예제에서는 제대로 작동하지 않는다

해결 방법:
age 변수를 int형으로 변경한 후 다시 정렬해준다
"""