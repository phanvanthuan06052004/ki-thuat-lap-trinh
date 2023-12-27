#include<bits/stdc++.h>
using namespace std;


int A[100],n,ok;
void ktao(){
	for(int i=0; i<=n; i++){
		A[i]=0;
	}	
}

void sinh(){
	int i=n;
	while(i>=1 && A[i]==1){
		A[i]=0;
		--i;
	}
	if(i==0)
		ok=false;
	else
		A[i]=1;
}

int main(){
	cin>>n;
	ktao();
	ok=true;
	while(ok){
		for(int i=1; i<=n; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
	return 0;
}
