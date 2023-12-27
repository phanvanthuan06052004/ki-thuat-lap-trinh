#include<bits/stdc++.h>
using namespace std;

void nhap(int &n){
	cin>>n;
}
void chuyenNhiPhan(char S[], int n){
	int res=n,i=0;
	while(res>0){
		S[i++]=res%2 +'0';
		res/=2;
	}
	S[i]='\0';
	strrev(S);
	puts(S);
}

int main()
{
	int n; cin>>n;
	char S[100];
	chuyenNhiPhan(S,n);
	return 0;
	
}
