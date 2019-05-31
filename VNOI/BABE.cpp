#include <bits/stdc++.h>
using namespace std;
int tonguoc(int n){
	int ret=0;
	for(int i=1; i<=n/2; i++){
		if(n%i==0){
			ret+=i;
		}
	}
	return ret;
}
int main(){
	int a=0,b=0;
	cin >> a >> b;
	if((tonguoc(a)==b) && (tonguoc(b)==a)){
		cout << "YES";	
	} else {
		cout << "NO";
	}
	return 0;
}
