import sys

N = int(sys.stdin.readline())
num = [0] * 10001

for i in range(N):
    num[int(sys.stdin.readline())] += 1

for i in range(10001):
    if num[i] != 0:
        for j in range(num[i]):
            print(i)

"""
실패 이유:
이 문제는 메모리 제한이 8MB로 다른 문제들과 달리 시간복잡도가 아닌 공간복잡도를 줄여야 하는 문제이다.
for문 속에서 append를 이용하면 메모리의 재할당이 이루어지며 메모리를 비효율적으로 사용한다.

해결 방법:
for문 속에서 append를 해주는 것이 아닌 미리 모든 요소들을 0으로 최대치만큼의 길이를 가진 배열을 만들어두고 입력값과 같은 인덱스에 +1을 해준다.
입력을 전부 받은 후 0보다 큰 요소를 갖는 인덱스들을 찾아 그 수만큼 인덱스를 출력한다.
"""