#include<iostream>
#define size 100
using namespace std;
int A[size],B[size], P[size], PhuongAn[size],n;
int best_cost=INT_MAX;
void binary_enumeration(int a);
void output();
void input();
int main()
{
    input();
    binary_enumeration(0);
   	output();
   	return 0;
}
void input()
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
	for(int i=0; i<n; i++)
		cin>>B[i];
}
void cost()
{
	int ta=0;
	int tb=0;
	for(int i=0; i<n; i++)
		if(P[i]==0)
			ta=ta+A[i];
		else
			tb=tb+B[i];
	int tg=ta;
	if(ta<tb)
		tg=tb;
	if(tg<best_cost)
	{
		best_cost=tg;
		for(int i=0; i<n; i++)
			PhuongAn[i]=P[i];
	}
}

void binary_enumeration(int a)
{
    if(a==n)
        cost();
    else
        for(int i=0; i<=1; i++)
        {
            P[a]=i;
            binary_enumeration(a+1);
        }           
}

void output()
{
    cout<<"time: "<<best_cost<<endl;
    for(int i=0; i<n; i++)
        cout<<PhuongAn[i]<<" ";
    cout<<endl;
}

