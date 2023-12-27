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
void xuat(int result)
{
	cout<<result;
}
int UCLN(int a, int b)
{
	if(b==0)
		return a;
	else
		return UCLN(b,a%b);
}
int main()
{
	int n;
	nhap(n);
	int res=0;
	for(int i=0; i<n; i++)
		res=UCLN(res,A[i]);
	xuat(res);
	return 0;
}
