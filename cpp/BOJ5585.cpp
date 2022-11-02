#include <iostream>
using namespace std;

int main() {
    int price;
    cin >> price;
    int change;
    change = 1000 - price;
    int arr[7] = {500, 100, 50, 10, 5, 1};
    int sum = 0;
    for(int i = 0; i < 6; i++) {
        sum += change / arr[i];
        change = change % arr[i];
    }
    cout << sum;
}