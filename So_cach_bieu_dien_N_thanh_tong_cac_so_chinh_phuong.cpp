// BDS005: So cach bieu dien so thanh tong cac So Chinh Phuong
#include <bits/stdc++.h>
using namespace std;

//vector luu tru tat ca cac SCP nho hon N
vector<int> soChinhPhuong;

// Ham tinh tong cac SCP nho hon N
void tinh_toan_scp(int N){
	for (int i = 1; i * i <= N; i++){
		soChinhPhuong.push_back(i*i);
	}
}

vector<vector<int> > dp;

// Ham de quy de dem so cach bieu dien
int deQuydemCachBd (int chiso, int muctieu){
	if (muctieu == 0)
		return 1;
	if (chiso < 0 || muctieu < 0)
		return 0;
	
	if (dp[chiso][muctieu] != -1)
		return dp[chiso][muctieu];
	
	return dp[chiso][muctieu] = deQuydemCachBd(chiso, muctieu - soChinhPhuong[chiso]) + deQuydemCachBd(chiso - 1, muctieu);
}

int soCachBD (int N){
	// Tinh tat ca so cp nho hon N
	tinh_toan_scp(N);
	
	dp.resize(soChinhPhuong.size() + 1, vector<int>(N+1, -1));
	
	return deQuydemCachBd(soChinhPhuong.size() - 1, N);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << soCachBD(n) << endl;
	}
	return 0;
}
