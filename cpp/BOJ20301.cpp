#include <iostream>
#include <deque>
using namespace std;

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    deque<int> dq;
    int count = 0;
    int reverse = 0;
    
    for(int i = 1; i <= N; i++) {
        dq.push_back(i);
    }

    while(N--) {
        if(count == M) {
            count = 0;
            reverse = 1 - reverse;
        }
        if(!reverse) {
            for(int i = 0; i < K - 1; i++) {
                int x = dq.front();
                dq.pop_front();
                dq.push_back(x);
            }
            cout << dq.front() << "\n";
            dq.pop_front();
            count++;
        }

        else {
            for(int i = 0; i < K - 1; i++) {
                int x = dq.back();
                dq.pop_back();
                dq.push_front(x);
            }
            cout << dq.back() << "\n";
            dq.pop_back();
            count++;
        }
    }
}