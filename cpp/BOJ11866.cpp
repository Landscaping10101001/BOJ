#include <iostream>
#include <vector>
#include <queue>
using namespace std;
queue <int> q;
vector <int> v;

int main() {
    int N;
    int M;
    cin >> N >> M;

    for(int i = 1; i <= N; i++) {
        q.push(i);
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M - 1; j++) {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }

    cout << "<";
    for(int i = 0; i < N; i++) {
        if(i == N - 1) {
            cout << v[i];
        }
        else {
            cout << v[i] << ", ";
        }
    }
    cout << ">";

    return 0;
}