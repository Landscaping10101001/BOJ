#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    int K;
    cin >> K;
    while(K--) {
        int num;
        cin >> num;
        if(num != 0) {
            st.push(num);
        }
        else {
            st.pop();
        }
    }
    int sum = 0;
    int n = st.size();
    for(int i = 0; i < n; i++) { //반복문안에서 i < st.size()로 적었더니 문제가 발생. pop해주는 순간 st.size()의 값이 변해 반복문이 끝나버린다.
        sum += st.top();
        st.pop();
    }
    cout << sum;
}