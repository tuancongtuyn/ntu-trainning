#include <bits/stdc++.h>
using namespace std;

int main(){
	int solan=0, kichthuoc, a=0,b=0;
	cin >> a >>b;
	while(a<b){
		if(a>b/2) break;
		solan+=1;
		a+=a;
	}
	cout << solan;
	return 0;	
}
