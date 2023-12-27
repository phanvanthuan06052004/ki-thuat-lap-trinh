#include<iostream>
#define size 100
using namespace std;
int A[size],B[size]={0},n,res;
void permutation(int a);
void output();

int main()
{
    cin>>n;
    res=0;
    permutation(0);
    cout<<res;
    return 0;
}


void permutation(int a)
{
    if(a==n)
        output();
    else
    {
    	for(int i=0; i<n; i++)
        {
        	if(B[i]==0)
        	{
        		A[a]=i;
            	B[i]=1;
            	permutation(a+1);
            	B[i]=0;
			}
        }   
	}        
}
void output()
{
    res++;
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
	cout<<endl;
}

