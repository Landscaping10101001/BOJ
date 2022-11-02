import sys

N = int(sys.stdin.readline())

data = list(map(int, sys.stdin.readline().split()))

M = int(sys.stdin.readline())

target = list(map(int, sys.stdin.readline().split()))

data.sort()

def binary_search(target):
    start = 0
    end = len(data) - 1

    while start <= end:
        mid = (start + end) // 2
        if data[mid] == target:
            return True
        
        elif data[mid] < target:
            start = mid + 1
        
        else:
            end = mid - 1

for i in target:
    if binary_search(i):
        print("1")
    else:
        print("0")

"""
실패 이유:
N , M < 100000으로 완전 탐색을 사용하면 시간복잡도가 O(N^2)으로 제한시간 1초안에 완료하지 못한다.

해결 방법:
이진 탐색을 이용한다.
이진 탐색은 시간복잡도가 O(NlogN)으로 제한시간 안에 작업 완료 가능 하다.

-이진 탐색-
def binary_search(data, target):
    data.sort()
    start = 0
    end = len(data) - 1

    while start <= end:
        mid = (start + end) // 2
        if data[mid] == target:
            return mid
        elif data[mid] < target:
            start = mid + 1
        else:
            end = mid - 1

    return None
"""