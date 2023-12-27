#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
	cin>>n;
}
int fibo(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(n%2==0){
		return fibo(n/2);
	}
	else{
		return fibo(n/2)+fibo(n/2+1);
	}
}
void xuat(int kq){
	cout<<kq;
}
int main(){
	int n;
	nhap(n);
	int kq=fibo(n);
	xuat(kq);
	return 0;
}
