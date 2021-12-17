// FIBO001: TIM SO THU N KHONG THUOC DAY FIBONACCI
#include<bits/stdc++.h>
using namespace std;
 
int nonFibonacci(int n){

    int prevPrev=1, prev=2, curr=3;

    while (n > 0){
    	
        prevPrev = prev;
        prev = curr;
        curr = prevPrev + prev;
        n = n - (curr - prev - 1);
    }
    
    n = n + (curr - prev - 1);
    return prev + n;
}
 
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << nonFibonacci(n) << endl;
	}
	return 0;
}
