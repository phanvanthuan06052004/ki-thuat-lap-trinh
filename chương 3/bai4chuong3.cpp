#include<iostream>
using namespace std;
void nhap(int &n);
int tongcuaTich(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=tongcuaTich(n); // dang 1+(1+2+..+n
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int tongcuaTich(int n)
{
	int s=1,t=1;
	for(int i=2; i<=n; i++)
	{
		t=t*i;
		s=s+t;
	}
	return s;
}
void xuat(int kq)
{
	cout<<kq;
}
