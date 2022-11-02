#include <iostream>
#include <algorithm>
using namespace std;

struct box {
    int R , C;
    int area;
}arr[10001];

bool cmp(const box &x, const box &y) {
    return x.area > y.area;
}

int main() {
    int Testcase;
    cin >> Testcase;
    for(int i = 0; i < Testcase; i++) {
        int J , N;
        cin >> J >> N;
        for(int j = 0; j < N; j++) {
            cin >> arr[j].R >> arr[j].C;

            arr[j].area = arr[j].R * arr[j].C;
        }
        sort(arr, arr + N, cmp);
        int sum = 0;
        int count;
        count = 0;
        for(int j = 0; j < N; j++) {
            sum += arr[j].area;
            count += 1;
            if(sum >= J) {
                break;
            }
        }
        cout << count << endl;
    }
}