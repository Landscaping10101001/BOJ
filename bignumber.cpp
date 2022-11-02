#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int dice[7] = {};
    int number = 0;
    int dice_number = 0;
    int sum = 0;
    int want_number;
    srand((unsigned int)time(NULL));

    cout << "시행횟수를 입력하세요: ";
    cin >> number;
    cout << "원하는 숫자 입력: ";
    cin >> want_number;

    while(number--) {
        dice_number = rand();
        dice_number = dice_number % 6 + 1;
        dice[dice_number]++;
    }
    
    for(int i = 1; i < 7; i++) {
        sum += dice[i];
    }

    cout << (double)dice[want_number] / sum;
}