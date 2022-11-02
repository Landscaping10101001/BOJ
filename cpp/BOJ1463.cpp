#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000001];

int make_1(int n) {
    if(n == 1) {
        return 0;
    }
    if(dp[n] != -1) {
        return dp[n];
    }
    int result = make_1(n - 1) + 1;
    if(n % 3 == 0) {
        result = min(result, make_1(n / 3) + 1);
    }
    if(n % 2 == 0) {
        result = min(result, make_1(n / 2) + 1);
    }
    return dp[n] = result;
}

int main() {
    int n;
    cin >> n;
    fill(dp, dp + n + 1, -1);
    cout << make_1(n);
}
// 125 124 62 31 30 