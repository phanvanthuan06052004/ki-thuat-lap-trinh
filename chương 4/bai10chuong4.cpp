#include<iostream>
#define size 1000
using namespace std;
int A[size],n;

void input();
void output(int kq);
int count(int a);
int countmax(int n);

int main()
{
	input();
	int kq=countmax(n);
	output(kq);
	return 0;
}

void input()
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void output(int kq)
{
	cout<<kq;
}
int count(int a)
{
	int res=0;
	for(int i=0; i<n; i++)
		if(A[i]==a)
			res++;
	return res;
}
int countmax(int n)
{
	if(n==1)
		return A[0];
	else
	{
		int x=countmax(n-1);
		int a2=count(A[n-1]);
		int a1=count(x);
		if(a2>a1)
			return A[n-1];
		else
			if(a1==a2)
			{
				if(A[n-1]<x)
					return A[n-1];
				else
					return x;
			}
			else
				return x;
	}

}

