#include<iostream>
using namespace std;
void nhap(long long &n)
{
	cin>>n;
}
long long factorialFunction(long long n)
{
	if(n==0)
		return 1;
	else
		return n*factorialFunction(n-1);
}
void xuat(long long kq)
{
	cout<<kq;
}
int main()
{
	long long n;
	nhap(n);
	long long kq=factorialFunction(n);
	xuat(kq);
	return 0;
}
