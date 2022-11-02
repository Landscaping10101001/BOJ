#include <iostream>
#include <vector>
using namespace std;

int N , S;
int cnt = 0;
int arr[21];

void bt(int idx, int sum) {
    if(idx == N) {
        return;
    }
    if(sum + arr[idx] == S) {
        cnt++;
    }

    bt(idx + 1, sum);
    bt(idx + 1, sum + arr[idx]);
}

int main() {
    cin >> N >> S;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    bt(0, 0);
    cout << cnt;
    return 0;
}