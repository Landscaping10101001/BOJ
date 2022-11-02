#include <iostream>
using namespace std;

int main(void) {
    int number;
    cin >> number;

    for (int i = 0; i < number; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}