#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct point { //좌표와 화살표의 길이 구조체 선언
    int position;
    int color;
    int length = 0;
}arr[100001];

bool change(point a, point b) { //정렬 함수 선언
    if(a.color == b.color) {
        return a.position < b.position;
    }
    else {
        return a.color < b.color;
    }
}

int main() {
    int N; //점 개수
    cin >> N; //점 개수 입력


    for(int i = 0; i < N; i++) { //점의 위치와 색 입력
        cin >> arr[i].position >> arr[i].color;
    }

    sort(arr, arr + N, change); //정렬

    for(int i = 0; i < N; i++) { //
        if(i == 0) {
            if(arr[i].color == arr[i + 1].color) {
                arr[i].length = arr[i + 1].position - arr[i].position;
            }
        }

        else if(i == N - 1) {
            if(arr[i].color == arr[i - 1].color) {
                arr[i].length = arr[i].position - arr[i - 1].position;
            }
        }

        else {
            int l = 0;
            int r = 0;
            if(arr[i].color == arr[i - 1].color) {
                l = arr[i].position - arr[i - 1].position;
            }
            if(arr[i].color == arr[i + 1].color) {
                r = arr[i + 1].position - arr[i].position;
            }
            if(l == 0 || r == 0) {
                arr[i].length = max(l, r);
            }

            else{
                arr[i].length = min(l, r);
            }
        }
    }

    long long sum = 0;

    for(int i = 0; i < N; i ++) {
        sum += arr[i].length;
    }

    cout << sum;

    return 0;
}