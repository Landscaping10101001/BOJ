#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> v;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	//code
    int n;
    cin >> n;
    int number;
    for(int i = 0; i < n; i++) {
        cin >> number;
        v.push_back(number);
    }

	sort(v.begin(),v.end());
    for(int i = 0; i < n; i ++) {
        cout << v[i] << '\n';
    }

	return 0;
}