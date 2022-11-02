#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string numbers;
    cin >> numbers;
    sort(numbers.begin(),numbers.end());
    reverse(numbers.begin(),numbers.end());
    cout << numbers;
    return 0;
}