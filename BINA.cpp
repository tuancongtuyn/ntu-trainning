#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> bina;
	int i=0;
	long long n;
	cin >> n;
	
	if(n==0){
		cout << 0;
	}
	else
	{
		while(n>0){
			bina.push_back(n%2);
			n/=2;
		}
		for(int i=0; i<bina.size(); i++){
			cout << bina[bina.size()-i-1];
		}
	}
}
