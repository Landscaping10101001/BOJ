#include <iostream>
using namespace std;

int main(void) {
    string word;
    cin >> word;
    int arr[26] ={0};
    for(int i = 0; i < word.size(); i++) {
        arr[word[i] - 97]++;
    }
    for(int i = 0; i < 26; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}