#include <iostream>
#include <vector>
#include <stack>
using namespace std;
stack <int> s;
vector <string> v;

int main() {
	int n; //수의 개수
	cin >> n;

	int arr[n]; //입력할 숫자 배열
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max_num = 0; //현재 입력된 수들 중 가장 큰 수
	for(int i = 0; i < n; i++) {
		if(s.size() == 0) {
			for(int j = max_num + 1; j <= arr[i]; j++) {
				s.push(j);
                v.push_back("+");
				max_num = arr[i];
			}
			s.pop();
            v.push_back("-");
		}
		else {
			if(arr[i] == s.top()) {
				s.pop();
                v.push_back("-");
			}
			else if(arr[i] > s.top()) {
				for(int j = max_num + 1; j <= arr[i]; j++) {
					s.push(j);
                    v.push_back("+");
					max_num = arr[i];
				}
				s.pop();
                v.push_back("-");
			}
			else {
				cout << "NO";
                return 0;
			}
		}
	}

    for(auto i : v) {
        cout << i << '\n';
    }

	return 0;
}