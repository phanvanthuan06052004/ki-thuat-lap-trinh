#include<bits/stdc++.h>
using namespace std;

void nhap(int &n, int &k){
	cin>>n>>k;
}
long long tohop(int n, int k){
	long long res=1;
	k= min(k,n-k);
	for(int i=0; i<k; i++){
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}

void xuat(long long kq){
	cout<<kq;
}

int main(){
	int n,k;
	nhap(n,k);
	long long kq=tohop(n,k);
	xuat(kq);
	return 0;
}
