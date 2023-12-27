#include<iostream>
#define size 100
using namespace std;
int A[size];

void input(int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void output(int kq)
{
	cout<<kq;
}
int findMin(int n)
{
	if(n==1)
		return A[0];
	else
	{
		int x=findMin(n-1);
		if(A[n-1]<x)
			return A[n-1];
		else 
			return x;
	}
}

int main()
{
	int n;
	input(n);
	int kq=findMin(n);
	output(kq);
	return 0;
}

