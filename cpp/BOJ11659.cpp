#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int start, end;
    long long sum[N + 1];
    sum[0] = 0;

    for(int i = 1; i < N + 1; i++) {
        sum[i] = sum[i - 1] + arr[i - 1];
    }

    for(int i = 0; i < M; i++) {
        cin >> start >> end;
        cout << sum[end] - sum[start - 1] << "\n";
    }

    return 0;
}