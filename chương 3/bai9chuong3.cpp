#include <iostream>
using namespace std;
void nhap(int A[], int &n, int &x);
void sapxepGiamDan(int A[], int n);
void doicho(int &x, int &y);
void xuat(int A[], int n,int vt,int x);
int timViTriCanChen(int A[], int n, int x, int &vt);
int main()
{
    int A[100],n,vt,x;
    nhap(A,n,x);
    sapxepGiamDan(A,n);
    vt=timViTriCanChen(A,n,x,vt);
    xuat(A,n,vt,x);
    return 0;
}
void nhap(int A[], int &n, int &x)
{
    cout<<"nhap n: "; cin>>n;
    cout<<"nhap x: "; cin>>x;
    for(int i=0; i<n; i++)
        cin>>A[i];
}
void sapxepGiamDan(int A[], int n)
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(A[i]<A[j])
                doicho(A[i],A[j]);
}
void doicho(int &x, int &y)
{
    int t=x;
    x=y;
    y=t;
}

int timViTriCanChen(int A[], int n, int x, int &vt)
{
    if(x>A[0])
        return 0;   
    if(x<A[n-1])
        	return n;
    for(int i=1;i<n-1;i++)
        if(A[i]<x)
        	return i;
}

void xuat(int A[], int n,int vt,int x)
{
    if(vt==0)
    	{
    		cout<<x<<" ";
    		for(int i=0;i<n;i++)
    		cout<<A[i]<<" ";
    		return ;
		}
    if(vt==n)
    	{
    		for(int i=0;i<n;i++)
    		cout<<A[i]<<" ";
    		cout<<x;
    		return ;
		}
	for(int i=0;i<n;i++)
		{
			if(i==vt)
				cout<<x<<" ";
			cout<<A[i]<<" ";
		}
}
