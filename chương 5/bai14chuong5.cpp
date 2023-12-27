#include<bits/stdc++.h>
using namespace std;
int fn(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(n%2==0){
		return fn(n/2);
	}
	else{
		return fn(n/2)+fn(n/2+1);
	}
}
int main(){
	int n; cin>>n;
	cout<<fn(n);
	return 0;
}
