#include <bits/stdc++.h>

using namespace std;
int n,a[21];
void sinh(int j){
	for(int i=0;i<=1;i++){
		a[j]=i;
		if(j==n){
			for(int k=1;k<=n;k++)	cout<<a[k];
			cout<<endl;
		}
		else sinh(j+1);
	}
}
int main()
{
	cin>>n;
	sinh(1);
	return 0;
}
    
