#include<bits/stdc++.h>
using namespace std;
bool isOperator(char a){
    if( a =='+' || a =='-' || a == '*' || a== '/' || a == '%' || a == '^') return true;
    else return false;
}
bool isOperatorString(string a){
    if( a =="+" || a =="-" || a == "*" || a== "/" || a == "%" || a == "^") return true;
    else return false;
}
string toString(char a){
    string tmp = "";
    tmp += a;
    return tmp;
}

string posToPre (string a){
    int len = a.length();
    stack<string> c;
    for (int i = 0; i < len; i++){
        if (isOperator(a[i])){
            string tmp1 = c.top(); c.pop();
            string tmp2 = c.top(); c.pop();
            string tmp3 = toString(a[i]) + tmp2 + tmp1;
            c.push(tmp3);
        }
        else{
            c.push(toString(a[i]));
        }
    }
    return c.top();
}

int main (){
    int t;
    cin >> t;
    while (t--){
        string a;
        cin >> a;
        cout << posToPre (a) << endl;
    }
    return 0;
}