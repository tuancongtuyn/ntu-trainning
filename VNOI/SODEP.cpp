#include <bits/stdc++.h>
using namespace std;
int tongchuso(long long n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n=n/10;
	}
	return tong;
}
int main(){
	long long n;
	cin >> n;
	//cout << tongchuso(n) << endl;
	if(tongchuso(n)%10==9){
		cout << "YES";	
	}
	else
	{
		cout << "NO";	
	}
	return 0;
}
