#include<iostream>
#include<string.h>
const char x[]=
{
	'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H'
};
using namespace std;
void nhap(int &n);
void chuyenHe2(int n);
void chuyenHe8(int n);
void chuyenHe16(int n);
int main()
{
	int n;
	nhap(n);
	chuyenHe2(n);
	chuyenHe8(n);
	chuyenHe16(n);
}
void nhap(int &n)
{

	cin>>n;
}
void chuyenHe2(int n)
{
	char S[100];
	if(n==0)
	{
		cout<<"0";
	}
	else
		{
			int i=0;
			while(n)
			{
				int co=n%2;
				n=n/2;
				S[i++]=x[co];
			}
			S[i]='\0';
			strrev(S);
			puts(S);
		}
}
void chuyenHe8(int n)
{
	char S[100];
	if(n==0)
	{
		cout<<"0";
	}
	else
		{
			int i=0;
			while(n)
			{
				int co=n%8;
				n=n/8;
				S[i++]=x[co];
			}
			S[i]='\0';
			strrev(S);
			puts(S);
		}
}
void chuyenHe16(int n)
{
	char S[100];
	if(n==0)
	{
		cout<<"0";
	}
	else
		{
			int i=0;
			while(n)
			{
				int co=n%16;
				n=n/16;
				S[i++]=x[co];
			}
			S[i]='\0';
			strrev(S);
			puts(S);
		}
}
