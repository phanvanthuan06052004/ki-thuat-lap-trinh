#include<bits/stdc++.h>
using namespace std;

void nhap(int &n){
	cin>>n;
}

int cnt_bit(int n){
	int cnt=0;
	while(n>0){
		if(n & 1){
			cnt++;
		}
		n=n>>1;
	}
	return cnt;	
}

int main(){
	int n;
	nhap(n);
	cout<<cnt_bit(n)<<endl;
	return 0;
}
