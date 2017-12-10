#include <bits/stdc++.h>
#define num0 48
using namespace std;
int main(){
	int m=0;
	string n;
	cin >> n;
	for(int i=0; i<n.size(); i++){
		m+=n[i]-num0;
	}
	cout << m;
}
