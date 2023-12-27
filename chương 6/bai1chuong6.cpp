#include<bits/stdc++.h>
using namespace std;
char A[100];
void nhap(int &n){
	cin>>n;
}

void henhiphan(int n){
	int res=n, i=0;
	while(res>0){
		A[i++]=res%2 + '0';
		res=res/2;
	}
	A[i]='\0';
	strrev(A);
	puts(A);
}

int main(){
	int n;
	nhap(n); 
	henhiphan(n);
	return 0;	
}
