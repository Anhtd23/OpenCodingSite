#include <bits/stdc++.h>
using namespace std;

long long sumOdd (long long n){
	long long terms = (n+1) / 2;
	long long sum = terms * terms;
	return sum;
}

long long sumOddInRange (long long l, long long r){
	return sumOdd(r) - sumOdd(l-1);
}

int main (){
	int test;
	cin >> test;
	while (test--){
		long long l,r;
		cin >> l >> r;
		cout << sumOddInRange(l,r) << endl;
	}
	return 0;
}
