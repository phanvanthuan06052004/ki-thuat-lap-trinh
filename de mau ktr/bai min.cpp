#include<bits/stdc++.h>
using namespace std;

void nhap(int A[][100], int &m, int &n){
	cin>>m>>n;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			cin>>A[i][j];
}
bool ktr(int A[][100],int i, int j, int m, int n){
	int res=0;
	int X[8]={-1, -1, -1, 0, 1, 1,  1, 0};
	int Y[8]={-1,  0,  1, 1, 1, 0, -1, -1};	
	for(int k=0; k<8; k++)
		if(A[i+X[k]][j+Y[k]]==9)
			res++;
	if(res==A[i][j])
		return true;
	return false;
		
}
void hople(int A[][100], int m, int n){
	int dem=0;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			if(A[i][j]!=9)
				if(ktr(A,i,j,m,n)==false)
					dem++;
	cout<<dem;
}

int main(){
	int A[100][100]={0},m,n;
	nhap(A,m,n);
	hople(A,m,n);
	return 0;
}

