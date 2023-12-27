#include<iostream>
using namespace std;
void nhap(int &n);
int tinhtong(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=tinhtong(n); //dang 1+(1+2+n) n<10^6
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int tinhtong(int n)
{
	int t=1,s=1;
	for(int i=2;i<=n;i++)
	{
		t=t+i;
		s=s+t;
	}
	return s;
}
void xuat(int kq)
{
	cout<<kq;
}
