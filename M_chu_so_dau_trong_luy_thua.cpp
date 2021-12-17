#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll modPower (ll a, ll b, ll M){
	ll res = 1;
	while (b){
		if (b & 1)
			res = res * a%M;
		a = a * a%M;
		b >>= 1;
	}
	return res;
}

void findFirstAndLastM (ll N, ll K, ll M){
	
	// ll lastM = modPower(N, K, (1ll)* pow(10, M));
	
	ll firstM;
	
	double y = (double)K * log10(N * 1.0);
	y = y - (ll)y;
	double temp = pow (10.0, y);
	
	firstM = temp * (1ll) * pow(10, M-1);
	
	cout << firstM << endl;
	// cout << lastM << endl;
}

int main (){
	int test;
	cin >> test;
	while (test--){
		ll n,m,k;
		cin >> n >> m >> k;
		findFirstAndLastM(n, m, k);
	}
	return 0;
}
