#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, f1=1, f2=1, f=0;
	cin >> n;
	cout << 1 << " " << 1 << " ";
	for(int i=2; i<n; i++){
		f=f1+f2;
		f1=f2;
		f2=f;
		cout << f << " ";
	}
	return 0;
}
