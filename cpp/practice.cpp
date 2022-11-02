#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int node_num; //node의 개수
int x, y; //간선이 연결된 두 노드
vector <int> adj[100001]; //인접 리스트 생성
int parents[100001];
int visited[100001];

void bfs(int root) {
	queue <int> q;
	q.push(root);
	while(!q.empty()) {
		int cur = q.front();
		q.pop();
		for(int next:adj[cur]) {
			if(parents[cur] != next) {
				parents[next] = cur;
				q.push(next);
			}
		}
	}
}

int main() {
	cin >> node_num; //node 개수 입력
	for(int i = 1; i < node_num; i++) {
		cin >> x >> y; //연결된 두 노드 입력
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bfs(1);
	for(int i = 2; i <= node_num; i++) {
		cout << parents[i] << '\n';
	}
	return 0;
}