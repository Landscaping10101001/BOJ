#include <iostream>
#include <vector>
using namespace std;

vector <int> v;
int main(void) {
    int num;
    cin >> num;

    for(int i = 0; i < num; i++) {
        int number;
        cin >> number;
        v.push_back(number);
    }
    int min_num = 1000000;
    int max_num = -1000000;
    for(int i = 0; i < num; i++) {
        if(v[i] < min_num) {
            min_num = v[i];
        }
        if(v[i] > max_num) {
            max_num = v[i];
        }
    }
    cout << min_num << ' ' << max_num;
    return 0;
}