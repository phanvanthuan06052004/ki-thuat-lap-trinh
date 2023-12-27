#include <iostream>
using namespace std;
void nhap(unsigned long long &n);
unsigned long long tinhTong(unsigned long long n);
void xuat(unsigned long long kq);
int main()
{
	unsigned long long n;
	nhap(n);
	unsigned long long kq=tinhTong(n); //n<10^10  unsigned long long
	xuat(kq);
	return 0;
}
void nhap(unsigned long long &n)
{
	cin>>n;
}
unsigned long long tinhTong(unsigned long long n)
{
	unsigned long long sum=0;
	for(unsigned long long i=1;i<=n; i++)
		sum+=i*(i+1)/2;
	return sum;
}
void xuat(unsigned long long kq)
{
	cout<<kq;
}
