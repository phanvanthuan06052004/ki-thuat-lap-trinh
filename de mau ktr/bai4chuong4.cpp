#include<iostream>
#define size 100
using namespace std;
int A[size];
 
void nhap(int &n, int &x)
{
	cout<<"nhap n: "; cin>>n;
	cout<<"nhap x: "; cin>>x;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int binarysearch(int n, int x, int left, int right)
{
	if(left==right)
	{
		if(A[left]==x)
			return left;
		else
			return -1;
	}
	else
	{
		int mid=(left+right)/2;
		if(A[mid]==x)
			return mid;
		else
			if(A[mid]>x)
				return 	binarysearch(n,x,left,mid-1);
			else
				return binarysearch(n,x,mid+1, right);
	}	
}
void xuat(int location)
{
	cout<<location;
}
int main()
{
	int n,x;
	nhap(n,x);
	int left=0;
	int right=n-1;
	int location=binarysearch(n,x,left,right);
	xuat(location);
	return 0;
}
