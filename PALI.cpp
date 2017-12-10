#include <bits/stdc++.h>
using namespace std;
bool check(long n){
	vector<int> checkpali;
	int i=0;
	while(n>0){
		checkpali.push_back(n%10);
		n/=10;
		i++;
	}
	for(int i=0; i<checkpali.size()/2; i++){
		if(checkpali[i]!=checkpali[checkpali.size()-1-i]){
			return false;
			break;
		}
		//cout << checkpali[i] << " ";
		//cout << checkpali[checkpali.size()-1-i] << " ";
	}
	return true;
}
int main(){
	int n=0;
	cin >> n;
	//vector<long> v;
	for(int i=0; i<n; i++){
		int a=0;
		cin >> a;
		if(check(a)){
			cout << a << " ";
		}
		//v.push_back(a);
	}
	//for(int i=0; i<n; i++){
	//	cout << v[i] << " ";
	//}
	//cout << sizeof(v);
	//cout << check(12344321);
}
