#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> length;

int main() {
    int K, N;
    cin >> K >> N;
    
    int lan;
    for(int i = 0; i < K; i++) {
        cin >> lan;
        length.push_back(lan);
    }
    sort(length.begin(), length.end());

    int end, mid, start = 0;
    int num, sum = 0;
    for(auto i:length) {
        sum += i;
    }
    end = sum / N;

    while(1) {
        mid = (start + end) / 2;
        sum = 0;
        for(int i = 0; i < K; i++) {
            num = 0;
            num = length[i] / mid;
            sum += num;
        }
        if(sum < N) {
            end = mid;
        }
        else if(sum > N) {
            start = mid;
        }
        else if(sum == N) {
            cout << mid;
            break;
        }
    }
}