import sys

N = int(sys.stdin.readline())
numbers = []

for i in range(N):
    x , y = list(map(int, sys.stdin.readline().split()))
    numbers.append([y, x])

numbers.sort()

for i,j in numbers:
    print(j, i)

"""
실패이유:
처음에는 여러 정렬 방식중 bubble sort 방식을 이용 해보려고 하였으나 bubble sort는  시간 복잡도가 O(N^2)로 매우 느린 방식이다.

해결 방법:
어렵게 생각할 필요가 없던 문제였다.
다른 정렬 알고리즘들을 구현할 필요 없이 파이썬의 내장함수인 sort 함수를 사용하면 된다.
(파이썬의 sort 함수가 어떤 정렬 알고리즘을 사용하는지는 알아보았지만 C언어로 만들어진 언어라 내장 라이브러리를 살펴보아도 알기 어렵다.
파이썬의 sort 함수는 O(NlogN)으로 일반적인 정렬 알고리즘보다 빠른 속도를 가지고 있다.)
처음 좌표를 입력 받을 당시 x, y좌표를 반대로 입력 받고 sort 함수를 이용해 정렬을 하고 x, y 좌표를 반대로 출력하면 된다.
"""