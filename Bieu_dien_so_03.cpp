//BDSO003: Biểu diễn N thành tổng của K số tự nhiên khác 0
#include <bits/stdc++.h>
using namespace std;

long long SoCachBieuDien (int n, int k){
    if (n < k) return 0;
    if (k == 1) return 1;
    long long count = n - 1;
    for (int i = 2; i <= k -1; ++i){
        count *= n - i;
        count /= i;
    }
    return count;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        cout << SoCachBieuDien(n, k) << endl;
    }
    return 0;
}
