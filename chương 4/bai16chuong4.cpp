#include<iostream>
#define size 100
using namespace std;
int A[size],B[size]={0},n,res;
int C[size][size];
int best_cost = INT_MAX;
int H[size];
void permutation(int a);
void output();
void input();
void tinhChiPhi();

int main()
{
    input();
    res=0;
    permutation(0);
    output();
    cout<<best_cost;
}

void tinhChiPhi()
{
	int cost=0;
	for(int i=0; i<n; i++)
		cost+=C[A[i]][A[i+1]];
	cost+=C[A[n-1]][A[0]];
	if(cost<best_cost)
	{
		best_cost=cost;
		for(int j=0; j<n; j++)
			H[j]=A[j];
	}
}

void permutation(int a)
{
    if(a==n)
        tinhChiPhi();
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
void input()
{
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>C[i][j];
}
void output()
{
    res++;
    for(int i=0; i<n; i++)
        cout<<H[i]<<" ";
	cout<<endl;
}

