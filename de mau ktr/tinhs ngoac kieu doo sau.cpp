#include<bits/stdc++.h>
#define size 100
using namespace std;
int tinhdosau(char S[]);
void xuat(int kq);

int main()
{
    char S[100];
    gets(S);
    int kq=tinhdosau(S);
    xuat(kq);
    return 0;
}

void xuat(int kq){
	cout<<kq;
}
int tinhdosau(char S[])
{
	int i=0;
	int len=strlen(S);
	int ngoacmo=0;
	int dosau=0;
	while(i<len)
	{
		if(S[i]=='(')
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

