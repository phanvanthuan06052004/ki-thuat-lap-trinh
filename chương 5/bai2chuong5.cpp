#include<bits/stdc++.h>
using namespace std;

int count(int n){
	int dem=0;
	while(n>0){
		n/=10;
		dem++;
	}
	return dem;
}

bool isamstrong(int n){
	int cnt=count(n);
	int tmp=n, res, sum=0;
	while(n>0){
		res=n%10;
		n/=10;
		sum+=pow(res,cnt);
	}
	if(sum==tmp)
		return true;
	return false;
}

int main(){
	int n; cin>>n;
	if(isamstrong(n)==true)
		cout<<"la so Amstrong";
	else
		cout<<"khong la so astrong";
	return 0;
}
