#include <bits/stdc++.h>
using namespace std;

// Ham kiem tra so nguyen to
int nguyenTo(int a){
	if (a == 1 || a == 0){
		return 0;
	}
	for (int i = 2; i <= sqrt(a); i++){
		if (a % i ==0){
			return 0;
		}
	}
	return 1;
}

// Ham check tat ca cac phan tu deu la SNT

int all_SNT (int a){
	int count;
	int dem1 = 0, dem2 = 0; //dem1 la dem so luong so // dem2 la dem so luong SNT
	while (a>0){
		count  = a % 10;
		if (nguyenTo(count)) dem2 ++;
		a /= 10;
		dem1 ++;
	}
	if (dem1 == dem2){
		return 1;
	}
	else return 0;
}

void dem (int a){
	int count  = 0;
	for (int i = 2; i <= a; i++){
		if (all_SNT(i) && nguyenTo(i)){
			count ++;
		}
	}
	cout << count << endl;
}

int main (){
	int test;
	cin >> test;
	while (test --){
		int a;
		cin >> a;
		dem(a);
	}
	return 0;
}
