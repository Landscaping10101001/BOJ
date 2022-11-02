#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct member {
    int number, age;
    string name;
} str[100001];

bool compare(member a, member b) { //나이가 다르면 나이순으로 배열하고 나이가 같으면 순서대로 배엻한다.
    if(a.age != b.age) {
        return a.age < b.age;
    }
    else {
        return a.number < b.number;
    }
}

int main() {
    int num;
    cin >> num;
    for(int i = 0; i < num; i++) {
        str[i].number = i;
        cin >> str[i].age >> str[i].name;
    }
    sort(str, str + num, compare);
    for(int i = 0; i  < num; i++) {
        cout << str[i].age << " " << str[i].name << '\n';
    }
    return 0;
}