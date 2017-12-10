#include <bits/stdc++.h>
using namespace std;

int  main(){
	unsigned long long a, b, du;
	cin >> a>>b;
	while(b!=0){
		du=a%b;
		a=b;
		b=du;
	}
	cout <<a;
	return 0;
}
