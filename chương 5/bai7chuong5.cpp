#include<bits/stdc++.h>
using namespace std;

bool nt[1000000];
void sang(){
	for(int i=0; i<=1000000; i++){
		nt[i]=true;
	}
	nt[0]=false;
	nt[1]=false;
	for(int i=2; i<=sqrt(1000000); i++){
		for(int j=i*i; j<=1000000; j+=i){
			nt[j]=false;
		}
	}
}

int main(){
	sang();
	int n;
	cin>>n;
	for(int i=0;i<n; i++){
		if(nt[i])
			cout<<i<<" ";
	}
	return 0;
}
