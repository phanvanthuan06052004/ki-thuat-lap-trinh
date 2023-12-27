#include<bits/stdc++.h>
using namespace std;
void nhap(char S[]);
void hoaVaXoa(char S[]);
void xoa(char S[],int vitrixoa);
void xuat(char S[]);
int main()
{
	char S[100];
	nhap(S);
	hoaVaXoa(S);
	xuat(S);
	return 0;
}
void nhap(char S[])
{
	gets(S);
}
void hoaVaXoa(char S[])
{
	strlwr(S);
	S[0]=(char)(S[0]-32);
	int dem=strlen(S);
	for(int i=0;i<strlen(S);i++)
		if(S[i]==' '&& S[i+1]==' ')
		{
			xoa(S,i);
			i--;
		}
    if(S[0]==' ')
		xoa(S,0);
    if(S[strlen(S)-1]==' ')
		xoa(S,strlen(S)-1);
	for(int j=0; j<dem; j++)
	{
		if(S[j]==32 && S[j+1]!=32)
		{
			S[j+1]=(char)(S[j+1]-32);
		}
	}
}
void xoa(char S[],int vitrixoa)
{
	int n=strlen(S);
    for(int i=vitrixoa;i<n;i++)
    	S[i]=S[i+1];
	S[n-1]='\0';
}
void xuat(char S[])
{
	puts(S);
}
