#include <bits/stdc++.h>
using namespace std;

int main(){
	int h=0,m=0,s=0;
	cin >> h >> m >> s;
	s+=1;
	if(s>59){
		s-=60;
		m+=1;
	}
	if(m>59){
		m-=60;
		h+=1;
	}
	if(h>23){
		h=h-24;
	}

	cout << h << " " << m << " " << s;
}
