#include<bits/stdc++.h> 

using namespace std; 
int main(){
	int n;
	int sum=0;
	cin >> n;
	for(int i=1; i<=n/2; i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum!=n || n==0){
		cout << "NO";	
	} else
	{
		cout << "YES";
	}
	return 0;
}
