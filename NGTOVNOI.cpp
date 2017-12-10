#include<bits/stdc++.h> 

using namespace std; 
const int oo = 1e7; 

int a, b;
int prime[oo]; 

void sang(){ 
	for(int i = 2; i<10000; i++){
	if (!prime[i]){
		for (int j = i; j*i <= 200000; j++){
			prime[i*j] = i;
		}
	}
}
return; 
} 

int main(){
	sang(); 
	cin >> a >> b; 
	for(int i=a; i<=b; i++){
		if(!prime[i] && i != 1){
			cout << i << "\n"; 
		} 
	}
return 0;
}
