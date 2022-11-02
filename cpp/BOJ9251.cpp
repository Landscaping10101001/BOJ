#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][1001]; //dp 테이블 선언
string s1, s2; //문자열 2개 선언

int func(int x, int y) {
    if(x == -1 || y == -1) {
        return 0;
    }
    if(dp[x][y] != -1) {
        return dp[x][y];
    }
    if(s1[x] == s2[y]) {
        return dp[x][y] = func(x - 1, y - 1) + 1;
    }
    return dp[x][y] = max(func(x - 1, y), func(x, y - 1));
}

int main() {
    for(int i = 0; i < 1001; i++) {
        for(int j = 0; j < 1001; j++) {
            dp[i][j] = -1; //dp 테이블 초기화
        }
    }

    cin >> s1;
    cin >> s2;

    cout << func(s1.length() - 1, s2.length() - 1);

    return 0;
}