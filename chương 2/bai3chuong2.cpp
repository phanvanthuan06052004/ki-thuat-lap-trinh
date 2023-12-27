#include<bits/stdc++.h>
using namespace std;

void nhap(int A[], int &n, int &vt, int &x, int &y);
void yeucau(int A[], int &n, int vt, int x, int y);
void themPhanTu(int A[], int &n, int vt, int x);
void xoaPhanTu(int A[], int &n, int vt);
void suaPhanTu(int A[], int n, int vt, int x);
int timkiem(int A[], int n, int x);
void xuat(int A[], int n);

int main()
{
	int A[100],n,vt,x,y;
	nhap(A,n,vt,x,y);
	yeucau(A,n,vt,x,y);
	xuat(A,n);
	return 0;
}

void nhap(int A[], int &n, int &vt, int &x, int &y)
{
	cout<<"nha 1 neu them, 2 neu xoa, 3 neu sua, 4 neu tim kiem: ";
	cin>>y;
	cout<<"nhap vitri de them, xoa va sua(neu khong co thi nhap 0): ";
	cin>>vt;
	cout<<"nhap gia tri can them, sua va tim kiem (neu khong co thi nhap 0): ";
	cin>>x;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void yeucau(int A[], int &n, int vt, int x, int y)
{
	if(y==1)
		themPhanTu(A,n,vt,x);
	else
		if(y==2)
			xoaPhanTu(A,n,vt);
		else
			if(y==3)
				suaPhanTu(A,n,vt,x);
			else
			{
				int kq=timkiem(A,n,x);
				if(kq==1)
					cout<<"khong co gia tri can tim trong cac gia tri: ";
				else
					cout<<"co gia tri: "<<kq<<" trong mang: ";
			}
}
void themPhanTu(int A[], int &n, int vt, int x)
{
	if(vt>=0 && vt<=n)
	{
		for(int i=n; i>vt; i--)
			A[i]=A[i-1];
		A[vt]=x;
		n++;
	}
}
void xoaPhanTu(int A[], int &n, int vt)
{
	if(vt>=0 && vt<n)
	{
		for(int i=vt; i<n-1; i++)
			A[i]=A[i+1];
		n--;
	}
}
void suaPhanTu(int A[], int n, int vt, int x)
{
	A[vt]=x;
}
int timkiem(int A[], int n, int x)
{
	int i;
	A[n]=x;
	for(i=0; ;i++)
		if(A[i]==x)
			break;
	if(i==n)
		return 1;
	return A[i];
}
void xuat(int A[], int n)
{
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
}

