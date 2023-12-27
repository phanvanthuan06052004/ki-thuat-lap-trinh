#include<iostream>
using namespace std;

void nhap(int A[], int &n){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}

void xuat(int A[], int n){
	for(int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}		
}

void lietKeMangTangDan(int A[], int n){
	int B[100],dem=0;
	for(int i=0; i<n; i++){
		int j=0;
		B[j]=A[i];
		while(A[i]<A[i+1] && i<n-1){
			i++;
			j++;
			B[j]=A[i];
		}
		if(j>=1){
			xuat(B,j+1);
			cout<<endl;
			dem++;
		}
	}
	cout<<dem;
}

int main(){
	int A[100],n;
	nhap(A,n);
	lietKeMangTangDan(A,n);
	return 0;
}
