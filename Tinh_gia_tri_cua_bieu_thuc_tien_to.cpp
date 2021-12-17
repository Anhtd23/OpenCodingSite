#include <bits/stdc++.h>
using namespace std;

// Xác định xem kí tự có phải là một toán hạng hay không
bool ToanHang (char a){
    return isdigit(a);
}

double giaTriBieuThucTienTo (string s){
    stack<double> st;
    for (int j = s.size() - 1; j >= 0; j--){
        //  Nếu một kí tự của xâu s là toán hạng thì đẩy nó vào ngăn xếp
        if (ToanHang(s[j]))
            st.push(s[j] - '0');
        else {
            // hai phần tử ra
            double op1 = st.top();
            st.pop();
            double op2 = st.top();
            st.pop();

            switch(s[j]){
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push (op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push (op1 / op2);
                    break;
            }
        }
    }
    return st.top();
}

int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        cout << giaTriBieuThucTienTo (s) << endl;
    }
    return 0;
}