#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

int main (){
	int test;
	cin >> test;
	while (test--){
		int n;
		cin >> n;
		int arr[MAX];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		int count = 0;
		int d = arr[1] - arr[0];
		for (int j = 1; j<n ;j++){
			if (arr[j] != (arr[0] + j*d)){
			count ++;
			break;
			}
		}
		if (count == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
