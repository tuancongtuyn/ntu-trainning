#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, sobia=0;
	cin >> n;
	sobia=n;
	while(n >= 10){
		n-=7;
		//n+=3;
		sobia+=3;
	}
	cout << sobia;
	return 0;
}
