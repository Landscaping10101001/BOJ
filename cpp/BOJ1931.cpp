#include <iostream>
#include <algorithm>
using namespace std;

struct meeting {
    int start , end;
}arr[100001];

bool cmp(const meeting& x, const meeting& y) {
    if(x.end != y.end) {
        return x.end < y.end;
    }
    else
        return x.start < y.start;
}

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> arr[i].start >> arr[i].end;
    }
    sort(arr, arr+ N, cmp);

    int count = 0;
    int last_time = 0;
    for(int i = 0; i < N; i++) {
        if(last_time <= arr[i].start) {
            count++;
            last_time = arr[i].end;
        }
    }
    cout << count;
}