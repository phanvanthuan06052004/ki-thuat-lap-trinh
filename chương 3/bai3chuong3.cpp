#include<bits/stdc++.h>
using namespace std;
void nhap(unsigned long long &n);
double tinhTong(unsigned long long n);
void xuat(double kq);
int main()
{
	unsigned long long n;
	nhap(n);
	double kq=tinhTong(n); //dang 1+1/(1+2+..+n)
	xuat(kq);
	return 0;
}
void nhap(unsigned long long &n)
{
	cin>>n;
}
double tinhTong(unsigned long long n)
{
	double s=1;
	unsigned long long t=1;
	for(unsigned long long i=2; i<=n; i++)
	{
		t=t+i;
		s=s+1.0*1/t;
	}
	return s;
}
void xuat(double kq)
{
	cout<< setprecision(6) << fixed << kq;
}
