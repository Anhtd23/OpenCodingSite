/* Thuật toán:
Đọc biểu thức tiền tố theo thứ tự ngược lại (phải sang trái)
Nếu là một toáng hạng thì đẩy nó vào ngăn sếp
Nếu là toán tử, bật hai toán hạng từ ngăn xếp
Tạo một chuỗi bằng cách nối hai toán hạng và toán tử giữa chúng
string = (operand1 + operator + operand2)
Và đẩy chuỗi kết quả trở lại stack
Lặp lại các bước trên tới khi kết thúc */
#include <bits/stdc++.h>
#include <stack>
using namespace std;

// Kiểm tra xem có phải toán tử không
bool isOperator (char x){
  switch (x){
    case '+':
    case '-':
    case '*':
    case '/':
      return true;
  }
  return false;
}

// Chuyển đổi prefix to Infix
string preToInfix (string pre_exp){
  stack<string> s;
  int length = pre_exp.size();

  // Đọc từ phải qua trái
  for (int i = length - 1; i >= 0; i--){
    //nếu là toán tử
    if (isOperator(pre_exp[i])){
      // cho vào ngăn xếp
      string op1 = s.top(); s.pop();
      string op2 = s.top(); s.pop();

      // Nối các toán hạng với toán tử
      string temp = "(" + op1 + pre_exp[i] + op2 + ")";

      // Đẩy kết quả trở lại ngăn xếp
      s.push(temp);
    }
    // Nếu là một toán hạng
    else{
      // Đẩy vào ngăn xếp
      s.push(string(1, pre_exp[i]));
    }
  }
  // Ngăn xếp gồm toàn InFix
  return s.top();
}

int main (){
  int t;
  cin >> t;
  while (t--){
    string pre_exp;
    cin >> pre_exp;
    cout << preToInfix (pre_exp) << endl;
  }
  return 0;
}