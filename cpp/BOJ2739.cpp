#include <iostream>
using namespace std;

int main(void) {
    int number;
    cin >> number;

    for(int i = 0; i < 9; i ++) {
        cout << number << ' ' << '*' << ' ' << i + 1 << ' ' << '=' << ' ' << number * (i + 1) << endl;
    }
    return 0;
}