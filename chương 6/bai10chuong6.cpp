#include<bits/stdc++.h>
#define size 100000
using namespace std;

void nhap(char S[size]){
	cin.getline(S,size);
}

void daonguoctu(char S[size]){
	int dem=strlen(S);
	int i=0;
	while(i<dem){
		int res=i;
		while(i<dem && S[i]!=' '){
		i++;
		}
		for(int j=0; j<=(int)(i-res)/2 -1; j++){
			int tam=S[j+res];
			S[j+res]=S[i-j-1];
			S[i-j-1]=tam;
		}
		i++;
	}
}

void xuat(char S[size]){
	puts(S);
}


int main(){
	char S[size];
	nhap(S);
	daonguoctu(S);
	xuat(S);
	return 0;
}
