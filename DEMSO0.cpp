#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=0, so0=0;
	cin >> n;
	unsigned long long giaithua=1;
	for(int i=2;i<=n;i++){
		giaithua*=i;
		while(giaithua%10==0){
			so0++;
			giaithua/=10;
		}
		if(giaithua/1000!=0){
			giaithua%=1000;
		}
	}
	cout << so0;
	return 0;
}
