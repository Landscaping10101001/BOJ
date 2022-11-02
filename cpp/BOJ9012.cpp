#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    int T;
    cin >> T;
    while(T--) {
        int ck = 0;
        stack<int> st;
        cin >> s;
        for(auto &c:s) { //c에 s를 하나씩 대입
            if(c == '(') { //여는 괄호면 push
                st.push(1);
            }
            else { //닫는 괄호면 pop
                if(st.empty()) { //stack이 비어있으면 break
                    ck = 1;
                    break;
                }
                else { //
                    st.pop();
                }
            }
        }
        if(!ck && st.empty()) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}