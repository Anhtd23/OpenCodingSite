#include <bits/stdc++.h>
using namespace std;
// Tim SCP nho nhat co K chu so voi moi chu so cua no cung la so chinh phuong
bool SCP (long long n);
bool CS_chinhphuong (long long n);

int main (){
	int test;
	cin >> test;
	while (test--){
		long long min, max;
		int n, cnt = 0;
		cin >> n;
		if (n%2==0){
			max = sqrt(pow(10,n));
			min = sqrt(pow(10, n-1)) + 1;
		}
		else {
			max = sqrt(pow(10, n)) +1;
			min = sqrt(pow(10, n-1));
		}
		for (long long  i = min; i < max; i++){
			if (CS_chinhphuong(i*i) == true){
				cnt = 1;
				cout << i*i << endl;
				break;
			}
		}
		if (cnt == 0){
			cout << -1 << endl;
		}
	}
	return 0;
}

bool SCP (long long n){
	long long x;
	x = sqrt(n);
	if (x * x == n){
		return true;
	}
	return false;
}

bool CS_chinhphuong(long long n){
	long long cs;
	while (n){
		cs = n % 10;
		n /= 10;
		if (SCP(cs) == false) return false;
	}
	return true;
}
