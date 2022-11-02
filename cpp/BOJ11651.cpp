#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct position {
    int x;
    int y;
}arr[100001];

bool change(position a, position b) {
    if(a.y == b.y) {
        return a.x < b.x;
    }
    else {
        return a.y < b.y;
    }
}

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> arr[i].x >> arr[i].y;
    }

    sort(arr, arr+N, change);

    for(int i = 0; i < N; i++) {
        cout << arr[i].x << " " << arr[i].y << '\n';
    }

    return 0;
}