#include <bits/stdc++.h>
using namespace std;

int main (){
	int test;
	cin >> test;
	while (test--){
		int a,b;
		cin >> a >> b;
		if (a>b) swap (a,b);
		int N = b;
		bool check [N+1]; // khoi tao tat ca chu so tu [2..N] deu la so nguyen to
		for (int i = 2; i <= N; i++){
			check[i] = true;
		}
		// Neu i la so nguyen to thì tat ca cac boi so cua i khong phai SNT
		for (int i=2; i <= N; i++){
			if (check[i] == true){
				for (int j = 2*i; j <=N; j+=i){
					check[j] = false;
				}
			}
		}
		
		int dem = 0;
		for (int i = 2; i<=N; i++){
			if (check[i] == true){
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
