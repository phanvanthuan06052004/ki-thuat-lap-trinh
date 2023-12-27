#include<iostream>
#define size 100
using namespace std;
int A[size];

void nhap(int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int sum(int start, int end)
{
	if(start==end)
		return A[start];
	else
	{
		return A[start]+ sum(start+1, end);
	}
}
void xuat(int kq)
{
	cout<<kq;
}
int main()
{
	int n;
	nhap(n);
	int start=0;
	int end=n-1;
	int kq=sum(start,end);
	xuat(kq);
	return 0;
 } 
