#include <bits/stdc++.h>
// #include <iostream>
// #include <cmath>
using namespace std;

int main (){
	int test;
	cin >> test;
	while (test--){
		long long n;
		cin >> n;
		long long k = n;
		int m;
		long long sum = 0;
		long long a[20];
		while (n!=0){
			long long last = n%10;
			a[m++] = last;
			n/=10;
		}
		for (int i = 0 ; i < m; i++){
			sum = sum + pow (a[i], m);
		}
		if (k == sum) cout << "1";
		else cout << "0";
		cout << endl;
	}
	return 0;
}
