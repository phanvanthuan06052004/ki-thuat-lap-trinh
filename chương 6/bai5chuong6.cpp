#include<bits/stdc++.h>
#define size 100
using namespace std;

void nhap(int A[][size], int &n){
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}

void tich2MaTran(int A[size][size], int B[size][size], int n){
	int C[size][size];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int res=0;
			for(int k=0; k<n; k++){
				res+=(A[i][k]*B[k][j]);
			}
			C[i][j]=res;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<C[i][j]<<" ";
		}
	cout<<endl;	
	}
	
}

int main(){
	int A[size][size],n;
	cin>>n;
	nhap(A,n);
	int B[size][size];
	nhap(B,n);
	tich2MaTran(A,B,n);
	return 0;
}
