#include <iostream>
using namespace std;

int main() {
    int N , K;
    cin >> N >> K;
    int coin[11];
    int count = 0;
    for(int  i = 0; i < N; i++) {
        int money;
        cin >> money;
        coin[i] = money;
    }
    for(int i = N - 1; i > -1; i--) {
        int a;
        a = K / coin[i];
        count += a;
        K %= coin[i];
    }
    cout << count;
}