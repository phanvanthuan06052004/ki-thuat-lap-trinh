#include<bits/stdc++.h>
#define size 100
using namespace std;
void enumerate(int n, int k);
void output(int A[], int n);
int res=0;
int main()
{
	int n;
	cin>>n;
	for(int k=0; k<=n; k++)
		enumerate(n,k);
	cout<<res;
	return 0;
}
void enumerate(int n, int k)
{
	int A[size];
	int i;
	for(i=0; i<k; i++)
		A[i]=i;
	output(A,k);
	i=k-1;
	while(i>=0)
	{
		while(A[i]<n-k+i)
		{
			A[i]++;
			for(int j=i+1; j<k; j++)
				A[j]= A[j-1]+1;
			output(A,k);
			i = k-1;
		}
		i--;
	}
}
void output(int A[], int n)
{
	res++;
	cout<<"{ ";
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
	cout<<"}"<<endl;
}
