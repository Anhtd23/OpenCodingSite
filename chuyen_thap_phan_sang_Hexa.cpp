// Chuyen mot so dang thap phan sang dang Hexa
#include <bits/stdc++.h>
using namespace std;

void chuyen_sang_Hexa (long long n){
	char hexaDecium[500];
	long long i = 0;
	if (n == 0) cout << "0" << endl;
	else {
		while (n != 0){
			long long temp = 0;
			temp = n%16;
			if (temp < 10){
				hexaDecium[i] = temp + 48;
				i++;
			}
			else {
				hexaDecium[i] = temp + 55;
				i++;
			}
			n = n/16;
		}
		for (int j = i-1; j>=0; j--){
			cout << hexaDecium[j];
		}
		cout << endl;
	}
}
int main (){
	int test;
	cin >> test;
	while (test--){
		long long n;
		cin >> n;
		chuyen_sang_Hexa(n);
	}
	return 0;
}
