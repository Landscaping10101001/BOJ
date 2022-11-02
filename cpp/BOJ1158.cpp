#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int N , K;
    cin >> N >> K;

    for(int i = 1; i <= N; i++) {
        q.push(i);
    }
    cout << "<";
    while(N--) {
        for(int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();            
        }
        cout << q.front();
        if(q.size() != 1) {
            cout << ", ";
        }
        else {
            cout << ">";
        }
        q.pop();
    }
}