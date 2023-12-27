#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
float tinhTong(int n);
void xuat(float kq);
int main()
{
	int n;
	nhap(n);
	float kq=tinhTong(n);  // dang 1+1/n!
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
float tinhTong(int n)
{
	int t=1;
	float s=1;
	for(int i=1; i<=n;i++)
	{
		t=t*i;
		s=s+1.0*1/t;
	}
	return s;
}
void xuat(float kq)
{
	cout<<setprecision(2) << fixed << kq;
}
