// DAYSO002: DAY CON K PHAN TU CO TONG BANG S
#include <bits/stdc++.h>
using namespace std;

int dem = 0;
vector <int> arr;
vector <int> arr2;

void hienThi (){
	int sopt = arr2.size();
	for (int i = 0; i < sopt; i++){
		cout << arr2[i] << " "; 
	}
	cout << endl;
}

void findSubset (int tong, int K, int S, int chiso){
	if (tong == S && arr2.size() == K){
	dem ++;
	return;
	}
	if (tong > S || chiso == arr.size())
	return;
	arr2.push_back(arr[chiso]);
	findSubset(tong + arr[chiso], K, S, chiso + 1);
	arr2.pop_back();
	findSubset(tong, K, S, chiso + 1);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int N, K, S;
		cin >> N >> K >> S;
		for (int i = 0; i < N; i++){
			int b;
			cin >> b;
			arr.push_back(b);
		}
		findSubset(0, K, S, 0);
		cout << dem << endl;
		dem  = 0;
		arr.clear();
		arr2.clear();
	}
	return 0;
}
