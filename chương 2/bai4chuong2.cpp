#include<bits/stdc++.h>
using namespace std;
int chuyen2ChieuSang1Chieu(int A[][100], int n, int m);
void nhap(int A[][100], int &n, int &m);
int main()
{
	int A[100][100],n,m;
	nhap(A,n,m);
	chuyen2ChieuSang1Chieu(A,n,m);
	return 0;
}
void nhap(int A[][100], int &n, int &m)
{
	cin>>n>>m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>A[i][j];
}
int chuyen2ChieuSang1Chieu(int A[][100], int n, int m)
{
	int B[n*m], k=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			B[k++]=A[i][j];
	for(int y=0; y<k; y++)
		cout<<B[y]<<" ";
}

