#include<iostream>
#define size 100
using namespace std;
int A[size],n,res;

void binary_enumeration(int a);
void xuat();

int main()
{
    cin>>n;
    res=0;
    binary_enumeration(0);
    cout<<"tong so day nhi phan co do dai n la:  "<<res;
}

void binary_enumeration(int a)
{
    if(a==n)
        xuat();
    else
        for(int i=0; i<=1; i++)
        {
            A[a]=i;
            binary_enumeration(a+1);
        }           
}

void xuat()
{
    res++;
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

