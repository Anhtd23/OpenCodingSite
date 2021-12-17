// Tong luy thua bac N
// Cho hai so m va n.. Output so cach bieu dien m thanh tong luy thua bac n
#include <bits/stdc++.h>
using namespace std;

// ham tinh luy thua mot so bat ki
long long power (long long num, long long n){
	if (n == 0) return 1;
	else if (n%2==0)
		return power(num, n/2) * power(num, n/2);
	else
		return num * power(num, n/2) * power(num, n/2);
}

// Ham bieu dien luy thua de quy
long long checkRecursive (long long x, long long n, long long cur_num = 1, long long cur_sum = 0){
	// x duoi dang luy thua bac n cua so tu nhien
	long long result  = 0;
	long long p = power(cur_num,n);
	
	while (p + cur_sum < x){
		// Kiem tra de quy tat ca gia tri lon hon i
		result += checkRecursive(x, n, cur_num + 1, p+cur_sum);
		cur_num++;
		p = power(cur_num,n);
	}
	if (p+cur_sum == x){
		result++;
	}
	return result;
}

int main (){
	int test;
	cin >> test;
	while (test--){
		long long m,n;
		cin >> m >> n;
		cout << checkRecursive(m,n) << endl;
	}
	return 0;
}

