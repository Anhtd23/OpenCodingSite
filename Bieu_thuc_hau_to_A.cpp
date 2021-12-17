#include<bits/stdc++.h>
using namespace std;
 
// Hàm trả về độ ưu tiên của các operator
int DoUuTien(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 
// Trung tố sang hậu tố
void ChuyenTrungToSangHauTo(string s) {
 
    stack<char> s_; 
    string ketQua;
 
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            ketQua += c;
 
        // Gặp '(' thì đẩy vào ngăn xếp
        else if(c == '(')
            s_.push('(');
 
        // Nếu gặp '(' thì đưa nó ra khỏi ngăn xếp và xuất ra 1 chuỗi
        else if(c == ')') {
            while(s_.top() != '(')
            {
                ketQua += s_.top();
                s_.pop();
            }
            s_.pop();
        }
 
        
        else {
            while(!s_.empty() && DoUuTien(s[i]) <= DoUuTien(s_.top())) {
                ketQua += s_.top();
                s_.pop(); 
            }
            s_.push(c);
        }
    }
 
    // đẩy tất cả các phần tử còn lại ra khỏi ngăn xếp
    while(!s_.empty()) {
        ketQua += s_.top();
        s_.pop();
    }
 
    cout << ketQua << endl;
}
 

int main() {
    int t;
    cin >> t;
    while (t--){
        string duyanh;
        cin >> duyanh;
        ChuyenTrungToSangHauTo(duyanh);
    }
    return 0;
}