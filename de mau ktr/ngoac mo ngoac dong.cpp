#include<bits/stdc++.h>
#define size 100
using namespace std;
int A[size],m,n;
int tinhdosau();
void lkNhiPhan(int a);
void output();
int dem=0;
int main()
{
    cin>>m>>n;
    lkNhiPhan(0);
    cout<<dem;
    return 0;
}

void lkNhiPhan(int a)
{
    if(a==m)
    {
    	if(tinhdosau()==n)
    		dem++;
	}
    else
        for(int i=0; i<=1; i++)
        {
            A[a]=i;
            lkNhiPhan(a+1);
        }           
}
int tinhdosau()
{
	int i=0;
	int ngoacmo=0;
	int dosau=0;
	while(i<m)
	{
		if(A[i]==0)
			ngoacmo++;
		else
		{
			if(ngoacmo==0)
				return -1;
			if(ngoacmo>dosau)
				dosau=ngoacmo;
			ngoacmo--;	
		}
		i++;
	}
	if(ngoacmo==0)
		return dosau;
	else
		return -1;
}

