#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int str[9];
    for(int i = 0; i < 9; i++) {
        cin >> str[i];
    }
    int sum = 0;
    for(int i = 0; i < 9; i++) {
        sum += str[i];
    }
    for(int i = 0; i < 8; i++) {
        int minus = 0;
        for(int j = i + 1; j < 9; j++) {
            minus = str[i] + str[j];
            if(sum - minus == 100) {
                break;
            }
        }
        if(sum - minus = 100) {
            break;
        }
    }
    return 0;
}