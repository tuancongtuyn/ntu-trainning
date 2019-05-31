#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long giaithua;
	for(int i=1; i<=n; i++){
		giaithua*=i;
	}
	cout << giaithua;
	return 0;
}
