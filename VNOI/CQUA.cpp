#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=0, tong=0, qua100=0, qua200=0;
	cin >> n;
	for(int i=1; i<=n; i++){
		int w=0;
		cin >> w;
		if(w==100){
			qua100+=1;
		}else if(w==200){
			qua200+=1;
		}
	}
	if(qua100%2!=0){
		cout << "NO";
	}else if(qua100==0 && qua200%2!=0){
		cout << "NO";
	}else {
		cout << "YES";
	}
}
