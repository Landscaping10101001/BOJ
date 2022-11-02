import sys

row , column = map(int, sys.stdin.readline().split())
chess_table = []
num_wrong = []

for i in range(row):
    chess_table.append(sys.stdin.readline().rstrip())

for i in range(row - 7): #세로 반복 횟수
    for j in range(column - 7): #가로 반복 횟수
        """
        8*8 체스판 완전탐색
        """
        wrong_W = 0
        wrong_B = 0
        for k in range(i, i + 8): #8*8 체스판 가로 탐색 범위
            for l in range(j, j + 8): #8*8 체스판 세로 탐색 범위
                if (k + l) % 2 == 0:
                    if chess_table[k][l] != "W":
                        wrong_W += 1
                    if chess_table[k][l] != "B":
                        wrong_B += 1
                
                else:
                    if chess_table[k][l] != "B":
                        wrong_W += 1
                    if chess_table[k][l] != "W":
                        wrong_B += 1

        num_wrong.append(wrong_W)
        num_wrong.append(wrong_B)

print(min(num_wrong))
"""
처음부터 접근이 잘못된 것이었다.
모든 경우의 수를 다 탐색하므로 잘못된 부분이 없는것처럼 보이지만 치명적인 문제가 숨겨져 있다.
예제 4번을 살펴보면 i = 1 , j = 15일때 체스판에서 왼쪽위가 검으색이므로 좌표의 합의 짝수가 검은색 그리고 홀수가 흰색이 아닌것의 개수를 세고 그 합을 저장하면 33이 나오게 된다.
그러나 이론상으로는 여기서 31이 나오고 최솟값으로 31의 출력이 이루어져야 한다.
그렇다면 무엇이 잘못된 것인가?
왼쪽위를 기준으로 잡고 좌표 합이 짝홀로 해당 좌표의 색깔을 판단하는 것이 아니라 전체판에서 흰색과 검은색의 개수를 세어서 체스판을 수정하기 위한 개수를 출력하는 방식으로 접근해야 한다.
"""