import sys

N = int(input())
strow = [] #2 3 2 3 2 4

for i in range(N):
    strow.append(int(sys.stdin.readline()))

sorted_strow = sorted(strow) #2 2 2 3 3 4->배열 정렬
sorted_strow.reverse() #4 3 3 2 2 2 ->내림차순으로 정렬

sum = 0
for i in range(N - 2):
    if sorted_strow[i] < (sorted_strow[i + 1] + sorted_strow[i + 2]):
        sum = sorted_strow[i] + sorted_strow[i + 1] + sorted_strow[i + 2]
        print(sum)
        break

if sum == 0:
    print(-1)

"""
<실패 이유>
이 문제는 3중 for을 사용할 수 없다. 3중 for문 사용시 시간복잡도에 따라 O(n^3)로 시간 초과가 나타난다.

<해결 방법>
배열을 내림차순으로 정렬 후 앞에서부터 연속된 3개의 수를 비교하면 된다. 이미 내림차순으로 정렬되어 아래까지 내려가 탐색할 필요가 없는것이다.(이 문장 만으로 이해가 힘들다면 다음 문장에들의 추가 설명을 읽어달라)
s[i], s[i + 1], s[i + 2]로 삼각형을 만들 수 없다면 s[i + 1]과 s[i + 2]의 다른 어떤 조합으로도 처음의 s[i + 1], s[i + 2]보다 크지 않으므로 삼각형을 만들 수 없다.
그렇기에 바로 다음의 연속된 3개의 수를 탐색해 최댓값을 찾는 것이다.

<배운 점>
Python에서 for문을 이용해 입력을 받을시 input()을 사용하면 시간초과가 발생하게 된다.
그렇기에 import()대신에 sys.stdin.readline()을 넣어주면 시간초과가 발생하지 않는다.
"""