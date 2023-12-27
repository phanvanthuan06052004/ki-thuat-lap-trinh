#include<bits/stdc++.h>
using namespace std;
void nhap(int A[], int &n, int &x);
int timkiem(int A[], int n, int x);
void xuat(int kq);
int main()
{
	int A[100],n;
	int x;
	nhap(A,n,x);
	int kq=timkiem(A,n,x);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n, int &x)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
	cout<<"nhap gia tri can tim x: ";
	cin>>x;
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
void xuat(int kq)
{
	if(kq==1)
		cout<<"khong co x";
	else
		cout<<"co x";
}
