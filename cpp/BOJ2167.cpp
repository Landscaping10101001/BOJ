#include <iostream>
using namespace std;

int main() {
    int N , M;
    cin >> N >> M;
    int arr[N][M];
    int num;
    for(int a = 0; a < N; a++) {
        for(int b = 0; b < M; b++) {
            cin >> num;
            arr[a][b] = num;
        }
        cout << "\n";
    }
    int K;
    cin >> K;
    int i , j , x , y;
    for(int a = 0; a < K; K++) {
        cin >> i >> j >> x >> y;
        int sum = 0;
        for(int b = i - 1; b < x - 1; b++) {
            for(int c = j - 1; j < y -1; j++) {
                sum += arr[b][c];
            }
        }
        cout << sum;
    }
}