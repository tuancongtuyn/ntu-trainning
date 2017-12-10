#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=0,m=0,g=0,c=0;
	cin >> n >> m;
	
	//2*g+4*(n-g)=m
	for(int i=0; i<=n; i++){
		if((2*i+4*(n-i)==m)){
			cout << i << " " << n-i;
			return 0;
		}
	}
	cout << -1;
}
