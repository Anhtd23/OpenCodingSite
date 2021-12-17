#include <bits/stdc++.h>
using namespace std;

long long Chocolate (long long x, long long y, long long m){
	long long so_vo_ban_dau = m/x;
	long long so_keo = so_vo_ban_dau;
	while ((so_vo_ban_dau/y) > 0){
		long long voThua = so_vo_ban_dau % y;
		so_keo += so_vo_ban_dau / y;
		so_vo_ban_dau = so_vo_ban_dau / y + voThua;
	}
	return so_keo;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long x,y,m;
		cin >> x >> y >> m;
		cout << Chocolate(x,y,m) << endl;
	}
	return 0;
}
// Bai toan mua keo Socola doi vo
