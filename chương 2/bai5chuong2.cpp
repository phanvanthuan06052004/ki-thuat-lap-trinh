#include<bits/stdc++.h>
using namespace std;
void nhap(int A[], int &n, int &m);
void chuyen1chieuSang2(int A[], int &n, int &m);
int main()
{
	int A[1000],n,m;
	nhap(A,n,m);
	chuyen1chieuSang2(A,n,m);
	return 0;
}
void nhap(int A[], int &n, int &m)
{
	cin>>n>>m;
	for(int i=0; i<n*m; i++)
		cin>>A[i];
}
void chuyen1chieuSang2(int A[], int &n, int &m)
{
	int B[n][m], k=0;
	for(int i=0; i<n;i++)
		for(int j=0; j<m; j++)
			B[i][j]=A[k++];
	for(int z=0; z<n; z++)
	{
		for(int x=0; x<m; x++)
		{
			cout<<B[z][x]<<" ";
		}
		cout<<endl;
	}
}
