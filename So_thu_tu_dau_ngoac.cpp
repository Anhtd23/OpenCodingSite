#include <bits/stdc++.h>
 
using namespace std;
 
// Hàm in số trong ngoặc
void InSoTrongNgoac(string exp, int n)
{
    // in dấu trong ngoặc
    // cho dấu ngoặc trái
    int left_bnum = 1;
     
    // in dấu trong ngoặc
    // cho dấu ngoặc phải
    stack<int> right_bnum;
     
    // duyệt biểu thức đã cho
    for (int i = 0; i < n; i++) {
         
        // Nếu kí tự hiện tại là một dấu ngoặc trái
        if (exp[i] == '(') {
            cout << left_bnum << " ";
             
            // cho 'left_bum' vào trong ngăn xếp 'right_bnum'
            right_bnum.push(left_bnum);
             
            // tăng 'left_bnum'
            left_bnum++;
        }
         
        // Nếu kí tự hiện tại là một ngoặc phải
        else if(exp[i] == ')') {
 
            // in phần tử trên cùng của ngăn xếp 'right_bnum'
            cout << right_bnum.top() << " ";
             
            // đẩy phần tử trên cùng ra khỏi ngăn xếp
            right_bnum.pop();
        }
    }
    cout << endl;
}
 

int main()
{
    int t;
    cin >> t;
    while (t--){
        string exp;
        cin >> exp;
        int n = exp.size();
        InSoTrongNgoac(exp, n);
    }
     return 0;
}