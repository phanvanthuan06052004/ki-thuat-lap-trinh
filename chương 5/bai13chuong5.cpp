#include<bits/stdc++.h>
using namespace std;
int A[100],n,k,ok;

void kTao(){
	for(int i=1; i<=k; i++){
		A[i]=i;
	}
}
void sinhToHop(){
	int i=k;
	while(i>=1 && A[i]==n-k+i){
		--i;
	}
	if(i==0)
		ok=false;
	else{
		A[i]++;
		for(int j=i+1; j<=k; j++){
			A[j]=A[j-1]+1;
		}
	}
}



int main(){
	cin>>n>>k;
	ok=true;
	kTao();
	while(ok){
		for(int i=1; i<=k; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
		sinhToHop();
	}
	return 0;
}
