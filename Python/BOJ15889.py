#실패의 문제점 - 던지는 사람이 바로 다음 사람이 아닌 그 뒤의 사람에게도 던질 수도 있다는 것을 간과함.
N = int(input()) #전우들의 인원 수
pos = list(map(int,input().split())) #전우들의 위치

if N == 1: #전우들의 수가 1명인 경우 
    print("권병장님, 중대장님이 찾으십니다")

else:
    distance = list(map(int,input().split())) #전우들의 사거리
    max_pos = 0
    for i in range(N - 1):
        max_pos = max(max_pos, pos[i] + distance[i])

        if max_pos >= pos[i + 1]:
            continue

        else:
            print("엄마 나 전역 늦어질 것 같아")
            exit()
    
    print("권병장님, 중대장님이 찾으십니다")