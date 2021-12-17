#include <bits/stdc++.h>
using namespace std;

long long soDoiXung (int n){
	return (9 * pow(10, (n - 1)/2));
}

int main (){
	int test;
	cin >> test;
	while (test --){
		int n;
		cin >> n;
		cout << soDoiXung(n) << endl;
	}
	return 0;
}

//dem so doi xung co k chu so
