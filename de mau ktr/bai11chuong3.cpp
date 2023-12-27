#include<bits/stdc++.h>
using namespace std;
void nhap(char S1[], char S2[]);
void multiply(char S1[], char S2[], char S[]);
void xuat(char S[]);
int main()
{
	char S1[101],S2[101], S[202];
	nhap(S1,S2);
	multiply(S1,S2,S);
	xuat(S);
	return 0;
}
void nhap(char S1[], char S2[])
{
	gets(S1);
	gets(S2);     
}
void multiply(char S1[], char S2[], char S[])
{
	int dem1=strlen(S1);
	int dem2=strlen(S2);
	
	strrev(S1);
	strrev(S2);
	
	memset(S,'0',dem1+dem2);
	for(int i=0; i<dem1; i++)
	{
		int carry=0;
		for(int j=0; j<dem2; j++)
		{
			int t=(S1[i]-'0') * (S2[j]-'0') + carry + (S[i+j]-'0');
			S[i+j]=t%10 + '0';
			carry=t/10;
		}
		S[i+dem2]=S[i+dem2]+carry;
	}
	int dem=dem1+dem2;
	while(dem>1 && S[dem-1]=='0')
	{
		dem--;
	}
	S[dem]='\0';
	
	strrev(S);
}
void xuat(char S[])
{
	puts(S);
}

