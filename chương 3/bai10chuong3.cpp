#include<bits/stdc++.h>
using namespace std;
void phanLoai(char S[]);
void nhap(char S[]);
int main()
{
	char S[200];
	nhap(S);
	phanLoai(S);
	return 0;
}
void nhap(char S[] )
{
	gets(S);
}
void phanLoai(char S[])
{
	int t=0,m=0,x=0,y=0;
	int dem=strlen(S);
	for(int i=0; i<dem; i++)
	{
		if(S[i]>='0' && S[i]<='9')
			t++;
		else
			if(S[i]>='a' && S[i]<='z')
				m++;
			else
				if(S[i]>='A' && S[i]<='Z')
					x++;
	}
	y=dem-t-m-x;
	cout<<m<<" "<<x<<" "<<t<<" "<<y;
}
