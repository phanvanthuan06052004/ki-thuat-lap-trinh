#include<bits/stdc++.h>
#define size 20
using namespace std;
int A[size][size]={0},n=6,res=0;
int t1=0,t2=0;
int X[8]={-2, -2, -1, -1, 1, 1, 2, 2};
int Y[8]={1, -1, 2, -2, -2, 2, -1, 1};
void output();
void maDiTuan(int x, int y);
int main()
{
	maDiTuan(2,2);
	cout<<"Khong co huong di nao";
}
void maDiTuan(int x, int y)
{
	res++;
	A[x][y]=res;
	for(int i=0; i<8; i++)
	{
		int a=x+X[i];
		int b=y+Y[i];
		if(res==n*n && a==t1 && b==t2)
		{
			output();
			exit(0);
		}
		if(a>=0 && a<n && b>=0 && b<n && A[a][b]==0)
			maDiTuan(a,b);
	}
	res--;
	A[x][y]=0;
}

void output()
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
	
}
