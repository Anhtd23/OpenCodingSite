#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    int n,test;
    float x;
    cin>>test;
    while(test--){
        cin>>n>>x;
        float sum=0;
        long long mau=1;
        for (int i = 1; i <= n ; i++) {

            mau*=i;
            sum+=pow(x,i)/mau;
        }
        cout<<setprecision(3)<<fixed<<sum<<endl;
    }
    return 0;
}
