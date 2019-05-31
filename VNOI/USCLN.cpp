#include<bits/stdc++.h> 

using namespace std; 
int main(){
	int a, b;
	cin >> a >> b;
	while(a!=0){
		int temp = b%a;
		b=a;
		a=temp;
	}
	cout << b;
	return 0;
}
