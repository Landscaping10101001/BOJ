#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    if(a.length() != b.length()) {
        return a.length() < b.length();
    }
    else {
        return a < b;
    }
}

int main() {
    string str[20001];
    int number;
    cin >> number;
    for(int i = 0; i < number; i++) {
        cin >> str[i];
    }
    sort(str, str + number, compare);
    for(int i = 0; i < number; i++) {
        if(str[i] != str[i + 1]) {
            cout << str[i] << '\n';
        }
    }
    return 0;
}