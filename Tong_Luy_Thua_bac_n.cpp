#include <bits/stdc++.h>
using namespace std;

long long luyThua (long long num, long long n){
	if (n==0) return 1;
	else if (n % 2 == 0) return luyThua(num, n/2) * luyThua(num, n/2);
	else return num * luyThua(num, n/2) * luyThua(num, n/2);
}

long long kt_deQuy(long long x, long long n, long long curr_num = 1, long long curr_sum = 0){
	long long ketQua = 0;
	long long  p = luyThua(curr_num, n);
	while (p + curr_sum < x){
		ketQua += kt_deQuy(x, n , curr_num + 1, p + curr_sum);
		curr_num ++;
		p = luyThua(curr_num, n);
	}
	
	if (p + curr_sum == x) ketQua++;
	return ketQua;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long m,n;
		cin >> m >> n;
		cout << kt_deQuy(m,n) << endl;
	}
	return 0;
}
