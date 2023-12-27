#include<bits/stdc++.h>
using namespace std;
int A[100],n,ok;

void sinh(){
	int i=n-1;
	while(i>=1 && A[i]>A[i+1]){
		--i;
	}
	if(i==0)
		ok=false;
	else{
		int j=n;
		while(A[i]>A[j]){
			--j;
		}
		swap(A[i],A[j]);
		reverse(A+i+1,A+n+1);
	}
}

int main(){
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>A[i];
	}
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
