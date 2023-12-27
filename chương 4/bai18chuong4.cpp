#include<bits/stdc++.h>
#define size 100
using namespace std;
int A[size],m,n;
int depth_calculation();
void binary_enumeration(int a);
void output();

int main()
{
    cin>>m>>n;
    binary_enumeration(0);
    return 0;
}

void binary_enumeration(int a)
{
    if(a==m)
    {
    	if(depth_calculation()==n)
    		output();
	}
    else
        for(int i=0; i<=1; i++)
        {
            A[a]=i;
            binary_enumeration(a+1);
        }           
}
int depth_calculation()
{
	int i=0;
	int opening_bracket=0;
	int depth=0;
	while(i<m)
	{
		if(A[i]==0)
			opening_bracket++;
		else
		{
			if(opening_bracket==0)
				return -1;
			if(opening_bracket>depth)
				depth=opening_bracket;
			opening_bracket--;	
		}
		i++;
	}
	if(opening_bracket==0)
		return depth;
	else
		return -1;
}
void output()
{
    for(int i=0; i<m; i++)
    {
    	if(A[i]==0)
    		cout<<'(';
    	else
    		cout<<')';
	}
    cout<<endl;
}

