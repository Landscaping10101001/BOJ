test_case = int(input())
apartment = [[0] * 14 for i in range(15)]
apartment[0] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]

for i in range(1, 15):
    sum = 0
    for j in range(14):
        sum += apartment[i - 1][j]
        apartment[i][j] = sum

for i in range(test_case):
    k = int(input())
    n = int(input())
    print(apartment[k][n - 1])

"""
실패이유:
0층부터 14층까지 아파트를 만들어야 하지만 아파트 2차원 배열 생성시 범위를 14로 정해 아파트를 13층까지만 만들어 k가 14일때 범위를 넝어서는 index오류가 발생한다.

해결방법:
아파트 2차원 배열 생성시 범위를 14에서 15로 변경해 14층까지 만들어 해결하였다.
"""