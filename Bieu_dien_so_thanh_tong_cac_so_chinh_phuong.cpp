#include <bits/stdc++.h>
using namespace std;

int caculator (int n, int i){
    int value = n - i*i;
    if (value == 0)
        return 1;
    if (value < 0)
        return 0;
    return caculator(value, i) + caculator(n, i +1);
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << caculator(n, 1) << endl;
    }
    return 0;
}