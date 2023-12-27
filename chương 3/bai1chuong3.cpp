#include<iostream>
#include<math.h>
using namespace std;
void nhap(long long &x, long long &p);
long long luyThua(long long a, long long b);
void xuat(long long kq);
int main()
{
	long long x,p;
	nhap(x,p);
	long long kq=luyThua(x,p);
	xuat(kq);
	return 0;
}
void nhap(long long &x, long long &p)
{
	cin>>x>>p;
}
long long luyThua(long long a, long long b)
{
	if(b==0) 
		return 1;
	long long x=luythua(a,b/2);
	if(b%2==1)
		return x*x*a;
	else
		return x*x;
}
void xuat(long long kq)
{
	cout<<kq;
}
