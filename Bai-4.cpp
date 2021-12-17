#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    int test,n;
    cin>>test;
    float x;
    while (test--){
        cin>>n>>x;
        float sum=0,m=1;
        for (int i = 1; i <= n; i++) {
            m *=x;
            sum = sqrt(m+sum);
        }
        cout<<setprecision(3)<<fixed<<sum<<endl;
    }
    return 0;
}
