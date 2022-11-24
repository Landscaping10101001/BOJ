#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;
vector <pair<int, pii>> v;

int parent[1001], vertex, edge, ans;

int find(int num) {
	if(num == parent[num]) return num;
	return parent[num] = find(parent[num]);
}

void Union(int cost, int a, int b) {
	a = find(a);
	b = find(b);
	if(a == b) return;

	parent[b] = a;
	ans += cost;
}

int main() {
	int v1; // 정점1
	int v2; // 정점2
	int weight; // 가중치

	cin >> vertex;
	cin >> edge;

	for(int i = 0; i <= vertex; i++) {
		parent[i] = i;
	}

	for(int i = 0; i < edge; i++) {
		cin >> v1 >> v2 >> weight;
		v.push_back({weight, {v1, v2}});
	}

	sort(v.begin(), v.end());

	for(auto k:v) {
		Union(k.first, k.second.first, k.second.second);
	}
	
	cout << ans;
	return 0;
}