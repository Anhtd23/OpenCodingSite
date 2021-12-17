#include <bits/stdc++.h>
using namespace std;

int dem;
long long checkSoLocPhat(long long n)
{
    long long temp = n;
    while(n)
    {
        if((n%10 != 6) && (n % 10 != 8))
            return 0; 
        n /= 10;
    }
    return temp;
}

long tinhToan(long long n)
{
    for(long long i = pow(10,n); i >= 6; i--)
    {
        if(checkSoLocPhat(i) != 0)
            dem++;
    }
    return dem;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        dem = 0;
        cout << tinhToan(n) << endl;
        for(long long i = pow(10,n); i >= 6; i--)
        {
            if(checkSoLocPhat(i) != 0)
                cout << i << " ";
        }
        cout << endl;
    }
}