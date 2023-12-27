#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
	cin>>n;
}
void fibo(int n){
	long long F[n+1];
	F[0]=0; F[1]=1;
	for(int i=2; i<=n; i++){
		F[i]=F[i-1]+F[i-2];
	}
	for(int i=0; i<=n; i++){
		cout<<F[i]<<" ";
	}
}
int main(){
	int n;
	nhap(n);
	fibo(n);
	return 0;
}

