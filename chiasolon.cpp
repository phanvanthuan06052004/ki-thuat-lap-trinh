#include<bits/stdc++.h>
using namespace std;

void nhap(char A[], long long &b){
	cin.getline(A,100);
	cin>>b;
}
void xuat(char kq[]){
	cout<<kq;
}

void chiasolon(char A[], long long b, char kq[]){
	int i=0; 
	int n=0;
	long long num=0;
	while(i<strlen(A)){
		num=num*10+(A[i]-'0');
		kq[n++]=num/b +'0';
		num=num%b;
		i++;
	}
	kq[n]='\0';
	strrev(kq);
	int y=strlen(A)-1;
	while(y>=0 && kq[y]=='0'){
		y--;
	}
	kq[y+1]='\0';
	strrev(kq);
}
//void xoaso0dau(char kq[]){
//	strrev(kq);
//	int i=strlen(A)-1;
//	while(i>=0 && kq[i]=='0'){
//		i--;
//	}
//	kq[i+1]='\0';
//	strrev(kq);
//}

int main(){
	char A[100],kq[100];
	long long b;
	nhap(A,b);
	chiasolon(A,b,kq);
	xuat(kq);
	return 0;
}
