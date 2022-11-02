#include <iostream>
using namespace std;

int main() {
    int n, k; //동전 개수 그리고 동전 합
    int dp[10001]; //dp table 선언
    cin >> n >> k;

    int coin[n + 1]; //동전 가치 배열
    for(int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    fill(dp + 1, dp + k + 1, 10001); //dp table 전부 최댓값 + 1로 초기화

    for(int i = 0; i < n; i++) { //coin[0]부터 시작
        for(int j = coin[i]; j <= k; j++) {
            dp[j] = min(dp[j], dp[j - coin[i]] + 1); 
        }
    }

    if(dp[k] == 10001) {
        cout << "-1"; //해당 수 제작 불가
    }
    
    else {
        cout << dp[k]; //최소 동전 개수
    }
    return 0;
}