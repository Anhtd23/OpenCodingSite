#include <bits/stdc++.h>
using namespace std;

// Kiểm tra một kí tự có phải toán hạng hay không
bool ToanHang (char x){
    return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
}

string ConvertToInfix (string exp){
    stack<string> s;

    for (int i = 0; exp[i] != '\0'; i++){
        // Đẩy các toán hạng vào ngăn xếp
        if (ToanHang (exp[i])){
            string op(1, exp[i]);
            s.push(op);
        }

        else{
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push ("(" + op2 + exp[i] + op1 + ")");
        }
    }

    return s.top();
}

int main (){
    int t;
    cin >> t;
    while (t--){
        string pre_s;
        cin >> pre_s;
        cout << ConvertToInfix (pre_s) << endl;
    }
    return 0;
}
