#include <bits/stdc++.h>
using namespace std;

unsigned long long result (unsigned long long n){
    if (n == 0)
        return 1;
    if (n < 10)
        return n;
    return max (result(n / 10) * (n % 10), result(n / 10 - 1) * 9);
}

int main (){
    int t;
    cin >> t;
    while (t--){
        unsigned long long n;
        cin >> n;
        cout << result (n) << endl;
    }
    return 0;
}