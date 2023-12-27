#include<bits/stdc++.h>
using namespace std;

void nhap(int A[][100], int &m, int &n){
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}

bool ladiemTroi(int A[][100], int i, int j, int m, int n){
	int X[8]={-2,-1,-2,-1,2,1,2,1};
	int Y[8]={-2,-1,2,1,-2,-1,2,1};
	for(int k=0; k<8; k++)
		if((i+X[k])>=0 && (i+X[k])<m && (j+Y[k])>=0 && (j+Y[k])<n && A[i][j]<=A[i+X[k]][j+Y[k]])
			return false;
	return true;
}

void diemTroi(int A[][100], int m, int n){
	int dem=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(ladiemTroi(A,i,j,m,n))
				dem++;
		}
	}
	cout<<dem;
}
int main(){
	int A[100][100],m,n;
	nhap(A,m,n);
	diemTroi(A,m,n);
	return 0;	
}
