#include <iostream>
#include <vector>
using namespace std;

vector <int> v;
int main(void) {
    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        int sum = 0;
        while(true) {
            sum += i % 10;
            i /= 10;
            if(i < 10) {
                break;
            }
        }
    }
    return 0;
}