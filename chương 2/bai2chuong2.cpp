#include<bits/stdc++.h>
using namespace std;
void nhap(int A[], int &n, int &x);
int timKiemNhiPhan(int A[], int n, int x);
void xuat(int kq);
int main()
{
	int A[100],n;
	int x;
	nhap(A,n,x);
	int kq=timKiemNhiPhan(A,n,x);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n, int &x)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
	cout<<"nhap gia tri x can tim ";
	cin>>x;
}
int timKiemNhiPhan(int A[], int n, int x)
{
	int left=0;
	int right=n-1;
	int mid=(left+right)/2;
	if(A[mid]==x)
		return 1;
	else
		if(A[mid]<x)
			for(int i=mid+1; i<n; i++)
				if(A[i]==x)
				{
					return 2;
					break;
				}
		else
			for(int j=0; j<mid; j++)
				if(A[j]==x)
				{
					return 3;
					break;
				}
}
void xuat(int kq)
{
	if(kq==1 || kq==2 || kq==3)
		cout<<"co gia tri x";
	else
		cout<<"khong ton tai x";
}
