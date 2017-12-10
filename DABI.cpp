#include <bits/stdc++.h>
using namespace std;
int tongso(long long n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int main(){
	long long n;
	cin >> n;
	if(n%tongso(n)==0)cout << 1;
	else cout << 0;
}
