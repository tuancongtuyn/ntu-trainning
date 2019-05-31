#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, step, pos=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> step;
		if(step==1){
			pos+=1;
		}else if(step==2){
			pos-=1;
		}
	}
	cout << abs(pos);
	return 0;
}




