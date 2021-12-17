#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, s = 0;
        cin >> n;
        long long count = 1;
        for (long long i = 2; i <= n; i *= 2){
            s += count ++ * ((n/i + 1)/2);
        }
        cout << s << endl;
    }
    return 0;
}
