#include<bits/stdc++.h>
using namespace std;
void nhap(int A[][100], int &m, int &n);
void xuat(int kq);
//int demDiemLoi(int A[][100], int m, int n);
bool ladiemloi(int A[][100], int i, int j);
//int giaTriMinloi(int A[][100], int m, int n);
int timminloi(int B[], int x);
int vitriDiemLoiMin(int A[][100], int m, int n, int D[], int C[]);

int main()
{
	int A[100][100]={0};
	int m,n;
	int D[10000];
	int C[10000];
	nhap(A,m,n);
//	int kq=demDiemLoi(A,m,n);
//	int kq=giaTriMinloi(A,m,n);
	vitriDiemLoiMin(A,m,n,D,C);
//	xuat(kq);
}
int vitriDiemLoiMin(int A[][100], int m, int n, int D[], int C[])
{
	int B[10000], nB=0;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			if(ladiemloi(A,i,j))
			{
				B[nB]=A[i][j];
				C[nB]=i;
				D[nB]=j;
				nB++;
			}
	if(nB!=0)
	{
		int vt=timminloi(B,nB);
		cout<<C[vt]-1<<" "<<D[vt]-1;
	}
	else
		cout<<-1;
}
//int giaTriMinloi(int A[][100], int m, int n)
//{
//	int B[10000], nB=0;
//	for(int i=1; i<=m; i++)
//		for(int j=1; j<=n; j++)
//			if(ladiemloi(A,i,j))
//				B[nB++]=A[i][j];
//	int min=timminloi(B,nB);
//	return min;
//}
int timminloi(int A[], int n)
{
	int min=A[0];
	int vt=0;
	for(int i=1; i<n; i++)
	{
		if(A[i]<min)
		{
			min=A[i];
			vt=i;
		}
	}
	return vt;
}

//int demDiemLoi(int A[][100], int m, int n)
//{
//	int dem=0;
//	for(int i=1; i<=m; i++)
//		for(int j=1; j<=n; j++)
//			if(ladiemloi(A,i,j))
//				dem++;
//	return dem;
//}
bool ladiemloi(int A[][100], int i, int j)
{
	int X[4]={0,0,1,-1};
	int Y[4]={-1,1,0,0};
	for(int k=0; k<4; k++)
		if(A[i][j]<= A[i+X[k]] [j+Y[k]])
			return false;
	return true;
}
void nhap(int A[][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			cin>>A[i][j];
}
//void xuat(int kq)
//{
//	cout<<kq;
//}

