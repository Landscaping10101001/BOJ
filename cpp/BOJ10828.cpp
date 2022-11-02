#include <iostream>
#include <stack>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    stack<int> st;
    string s;
    while(testcase--) {
        cin >> s;

        if(s == "push") {
            int num;
            cin >> num;
            st.push(num);
        }

        else if(s == "pop") {
            if(st.empty()) {
                cout << "-1\n";
            }
            else {
                cout << st.top() << "\n";
                st.pop();
            }
        }

        else if(s == "size") {
            cout << st.size() << "\n";
        }

        else if(s == "empty") {
            cout << st.empty() << "\n";
        }

        else if(s == "top") {
            if(st.empty()) {
                cout << "-1\n";
            }
            else {
                cout << st.top() << "\n";
            }
        }
    }
}