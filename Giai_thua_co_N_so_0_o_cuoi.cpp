// Chuong trinh c++ tìm so M! nh? nhat co dung N chu so 0 lien tiep o cuoi.
// Vi du n = 1 thì m = 5 vi 5!=120
#include <bits/stdc++.h>
using namespace std;

//Ham tra ve True neu giai thua chua it nhat n so 0 o cuoi
bool check (long long p, long long n){
	long long temp = p, count = 0, f = 5;
	while (f<=temp){
		count += temp/f;
		f *= 5;
	}
	return (count >= n);
}

//Tra ve so co n giai thua chua
//it nhat n so 0 o cuoi
long long findNum (long long n){
	//neu n == 1 tra ve 5
	// vi 5!= 120
	if (n == 1) return 5;
	// khoi tao thap va cao cho he nhi phan
	long long low = 0;
	long long high = 5*n;
	
	// tim kiem nhi phan
	while (low < high){
		long long mid = (low + high) >> 1;
		// kiem tra xem n giai thua co
		//chua n so 0 o giua
		if (check(mid, n))
			high = mid;
		else
			low = mid + 1;
	} 
	return low;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		cout << findNum(n) << endl;
	}
	return 0;
}
