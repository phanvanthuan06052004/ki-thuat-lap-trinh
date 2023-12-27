#include<bits/stdc++.h>
using namespace std;

void nhap(char S1[], char S2[], int &n);
void xuLi(char S1[], char S2[]);
void chen(char A[], int t);
void tinhTong(char S1[], char S2[], char S[]);
void xuat(char S[]);
void tinhhieu(char S1[], char S2[], char S[]);
void tinhHieuLonTruBe(char S1[], char S2[], char S[]);
void yeucau(char S1[], char S2[], char S[], int A);

int main()
{
	char S1[100], S2[100], S[100];
	int n;
	nhap(S1,S2,n);
	yeucau(S1,S2,S,n);
	xuat(S);
	return 0;
}
void nhap(char S1[], char S2[], int &n)
{
	gets(S1);
	gets(S2);
	cout<<"nhap 1 neu muon cong, nhap 2 neu muon tru: ";
	cin>>n;
}

void yeucau(char S1[], char S2[], char S[], int n)
{
	if(n==1)
	{
		xuLi(S1,S2);
		tinhTong(S1,S2,S);
	}
	else
	{
		xuLi(S1,S2);
		tinhhieu(S1,S2,S);
	}
}

void tinhhieu(char S1[], char S2[], char S[])
{
	if(strcmp(S1,S2)>0)
		tinhHieuLonTruBe(S1,S2,S);
	else
	{
		tinhHieuLonTruBe(S2,S1,S);
		int d=strlen(S);
		strrev(S);
		S[d]='-';
		S[d+1]='\0';
		strrev(S);
	}
}

void tinhHieuLonTruBe(char S1[], char S2[], char S[])
{
	strrev(S1);
	strrev(S2);
	int tam=0;
	int d=strlen(S1);
	for(int i=0; i<d; i++)
	{
		int s=(S1[i]-'0')-(S2[i]-'0')-tam;
		if(s<0)
		{
			S[i]=s+10+'0';
			tam=1;
		}
		else
		{
			S[i]=s+'0';
			tam=0;	
		}
	}
	S[d]='\0';
	strrev(S);
}

void xuLi(char S1[], char S2[])
{
	int d1=strlen(S1);
	int d2=strlen(S2);
	if(d1>d2)
		chen(S2,d1-d2);
	else
		chen(S1,d2-d1);
}
void chen(char A[], int t)
{
	strrev(A);
	int d=strlen(A);
	for(int i=0; i<t; i++)
		A[d+i]='0';
	A[d+t]='\0';
	strrev(A);
}
void xoaKyTu0(char S[])
{
    int pos = 0;
    int len = strlen(S);
    while (S[pos] == '0' && pos < len - 1) 
	{
        pos++;
    }
    if (pos == 0) 
	{
        return;
    }
    for (int i = pos; i <= len; i++) 
	{
        S[i - pos] = S[i];
    }
}

void tinhTong(char S1[], char S2[], char S[])
{
	strrev(S1);
	strrev(S2);
	int tam=0;
	int d=strlen(S1);
	for(int i=0; i<d; i++)
	{
		int s=(S1[i]-'0')+(S2[i]-'0')+tam;
		S[i]=s%10+'0';
		tam=s/10;
	}
	if(tam==1)
		S[d++]='1';
	S[d]='\0';
	strrev(S);
}
void xuat(char S[])
{
	xoaKyTu0(S);
	puts(S);
}
