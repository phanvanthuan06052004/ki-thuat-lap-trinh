#include<bits/stdc++.h>
using namespace std;
string a,b;
void Tich2so(string a,string b,int n,int m);
int main()
{
	cin>>a>>b;
	int n=a.length();
	int m=b.length();
	Tich2so(a,b,n,m);
}
void Tich2so(string a,string b,int n,int m)
{
	int kq[n+m]={0};
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<n;i++)
		{ 
		int nho=0; 
		for(int j=0;j<m;j++)	
			{
				int t=(a[i]-'0')*(b[j]-'0')+nho+kq[i+j];
				kq[i+j]=t%10;
				nho=t/10;
			}
		  if(nho!=0)
				kq[i+m]=nho;
		}
	if(kq[m+n-1]!=0)
		n=m+n-1;
	else
		n=n+m-2;
	for(int i=n;i>=0;i--)
		cout<<kq[i];
}
