#include <bits/stdc++.h>
using namespace std;
// Chuong trinh tinh tong uoc cua n nhung khong phai uoc cua m
long long sum_uoc_n_not_m (long long n, long long m){
	long long sum = 0;
	long long k = sqrt(n);
	for (int i = 1; i<= k; i++){
		long long value = n/i;
		if (n % i == 0){
			if (m % i != 0 && m % value != 0){
				sum += value +i;
			}
			else if (m % i == 0 && m % value != 0){
				sum += value;
			}
			else sum+= i;
		}
		else continue;
	}
	if (k * k == n){
		sum -= k;
	}
	return sum;
}
int main (){
	int t;
	cin >> t;
	while (t--){
		long long m,n;
		cin >> n >> m;
		cout << sum_uoc_n_not_m(n,m) << endl;
	}
	return 0;
}
