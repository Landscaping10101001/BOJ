#include <iostream>
using namespace std;

int main(void) {
    int num;
    cin >> num;
    int A , B;
    for(int i = 0; i < num; i++) {
        cin >> A >> B;
        cout << A + B << '\n';
    }
    return 0;
}