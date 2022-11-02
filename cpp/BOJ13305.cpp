#include <iostream>
#include <algorithm>
using namespace std;

struct road {
    long long price , distance;
}arr[100000];

int main() {
    long long N;
    cin >> N;
    for(int i = 0; i < N - 1; i++) {
        cin >> arr[i].distance;
    }
    for(int i = 0; i < N; i++) {
        cin >> arr[i].price;
    }
    long long min_price = arr[0].price;
    long long sum = 0;
    for(int i = 0; i < N - 1; i++) {
        if(min_price > arr[i].price) {
            min_price = arr[i].price;
        }
        sum += min_price * arr[i].distance;
    }
    cout << sum;
}

/*
현재 도시의 가격보다 적은 가격을 가진 도시까지의 거리만큼 기름을 구매한다.
이 과정을 반복하면 가장 저렴하게 이동이 가능하다. 
*/