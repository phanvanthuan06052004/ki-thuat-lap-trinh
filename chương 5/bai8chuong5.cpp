#include<bits/stdc++.h>
#define size 100
using namespace std;

int ktrDoiXung(char S1[]){
	int cnt=strlen(S1);
	for(int i=0; i<cnt; i++){
		if(S1[i]!=S1[cnt-i-1]){
			return 1;
		}
	}
	return 0;
}


void xuat(int kq){
	if(kq==0)
		cout<<"chuoi doi xung";
	else
		cout<<"chuoi khong doi xung";
}

int main(){
	char S1[size];
	cin.getline(S1,100);
	int kq=ktrDoiXung(S1);
	xuat(kq);
	return 0;
}

