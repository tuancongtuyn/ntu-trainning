#include <bits/stdc++.h>
using namespace std;

int main(){
	string S="hello";
	int n;
	getline(cin,S);
	cin >> n;
	for(int i=0; i<n; i++){
		cout << S.at(n-i-1);
	}
	for(int i=n; i<S.size(); i++){
		cout << S.at(S.size()-i+n-1);
	}
}
