#include <bits/stdc++.h>
using namespace std;
using namespace std;

bool check_SNT (unsigned long long n){
    if (n == 1){
        return false;
    }
    for (long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

void ketQua (unsigned long long n){
    int count = 0, value = 0;
    unsigned long long a[100], j = 0;
    
    if (n % 2 == 0){
        value ++;
        while (n % 2 == 0){
            n /= 2;
            count ++;
        }
        a[j++] = 2;
        a[j++] = count;
    }

    for (long long i = 3; i <=sqrt(n); i+=2){
        count = 0;
        while (n%i == 0){
            n /= i;
            count ++;
        }
        if (count > 0 ){
            value ++;
            a[j++] = i;
            a[j++] = count;
        }
    }

    if (n!= 1){
        value ++;
        a[j++] = n;
        a[j++] = 1;
    }

    cout << value << endl;
    for (int i = 0; i < j; i+=2){
        cout << a[i] <<  " " << a[i + 1] << endl;
    }

}

int main (){
    int t;
    cin >> t;
    while (t--){
        unsigned long long n;
        cin >> n;
        ketQua(n);
    }
    return 0;
}

