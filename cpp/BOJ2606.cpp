#include <iostream>
#include <vector>
using namespace std;

vector <int> adj[101]; //인접 리스트
int visited[101]; //방문 기록
int ans; //감염된 컴퓨터의 수(1번 컴퓨터포함)

void dfs(int node) {
	visited[node] = 1; //해당 번호 컴퓨터의 방문기록 작성
	ans++; //감염 숫자 1증가
	for(auto &next:adj[node]) {
		if(!visited[next]) { //감염되지 않았다면 전염
			dfs(next);
		}
	}
}

int main() {
	int computer_num, computer_pair = 0;
	cin >> computer_num; //컴퓨터의 수
	cin >> computer_pair; //컴퓨터쌍의 수

	while(computer_pair--) {
		int i, j = 0;
		cin >> i >> j;
		adj[i].push_back(j); //인접 리스트 작성
		adj[j].push_back(i); //인접 리스트 작성
	}
	dfs(1); //1번에서 시작
	cout << ans - 1; //1번을 제외한 개수
	return 0;
}

/*
-인접 리스트-
1 | 2 5
2 | 1 3 5
3 | 2
4 | 7
5 | 1 2 6
6 | 5
7 | 4

dfs(1) -> dfs(2) -> dfs(3), dfs(5) -> dfs(6)
*/