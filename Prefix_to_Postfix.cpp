#include <bits/stdc++.h>
using namespace std;

bool toanHang (char x){
    switch (x){
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
    }

    return false;
}

// Chuyển tiền tố về hậu tố:
string convertToPost (string exp){
    stack<string> s;
    int length = exp.size();

    // Đọc theo thứ tự ngược lại
    for (int i = length - 1; i >= 0; i--){
        if (toanHang(exp[i])){
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            string temp = op1 + op2 + exp[i];

            s.push(temp);
        }

        // nếu kì tự là một toán hạng
        else 
            s.push(string(1, exp[i]));
    }

    return s.top();
}

int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        cout << convertToPost (s) << endl;
    }
    return 0;
}
