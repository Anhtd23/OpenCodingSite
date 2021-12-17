#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int res = 0;
        stack <char> st;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == ')' && st.empty()){
                res ++;
                st.push ('(');
                continue;
            }
            if (s[i] == ')' && (!st.empty()) && st.top() == '('){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        cout << res + (st.size() / 2) << endl;
    }
    return 0;
}