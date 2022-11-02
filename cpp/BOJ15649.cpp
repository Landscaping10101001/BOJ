#include <iostream>
#include <vector>
using namespace std;
vector <int> v;

int N , M;
bool visited[9];

void bt() {
    if(v.size() == M) {
        for(int i = 0; i < M; i++) {
            cout << v[i] << ' ';
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= N; i++) {
        if(!visited[i]) {
            visited[i] = 1;
            v.push_back(i);
            bt(); //한 층 더 깊이 들어간다
            visited[i] = 0;
            v.pop_back();
        }
    }
}

int main() {
    cin >> N >> M;
    bt();

    return 0;
}