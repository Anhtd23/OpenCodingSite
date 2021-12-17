#include <bits/stdc++.h>
using namespace std;

int totalNum (int n){
	int sum=0;
	int tmp;
	while (n>0){
		tmp= n%10;
		n/=10;
		if (tmp % 2 != 0 ) sum+=tmp;
	}
	return sum;
}
int main (){
	int n;
	cout << "Nhap vao so n: ";
	cin >> n;
	cout << "Tong cac chu so cua n la: " << totalNum(n) << endl;
	return 0;
}
