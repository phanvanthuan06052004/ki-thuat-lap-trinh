#include<iostream>
using namespace std;

void input(int &n, int &k)
{
	cin>>n>>k;
}
int nCk(int n, int k)
{
	if(k==1)
		return n;
	else
		if(n==k)
			return 1;
		else
			return ( nCk(n-1,k) + nCk(n-1,k-1) );
}
//int nCk(int n, int k)
//{
//	long long res=1;
//	for(int i=0; i<k; i++)
//	{
//		res*=(n-1);
//		res/=(i+1);
//	}
//	return res;
//}
void output(int kq)
{
	cout<<kq;
}
int main()
{
	int n,k;
	input(n,k);
	int kq=nCk(n,k);
	output(kq);
	return 0;
}
