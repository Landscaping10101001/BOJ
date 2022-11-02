#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> cnt;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N; //숫자 카드의 개수 입력
	vector<int> numberCard(N);
	for(int i = 0; i < N; i ++) {
		cin >> numberCard[i]; //숫자 카드에 적힌 수 입력
	}
	sort(numberCard.begin(), numberCard.end()); //숫자 카드 오름차순으로 정렬

	int M;
	int num;
	cin >> M;
	for(int i = 0; i < M; i++) {
		cin >> num;
		cout << upper_bound(numberCard.begin(), numberCard.end(), num) - lower_bound(numberCard.begin(), numberCard.end(), num) << " ";
	}
}