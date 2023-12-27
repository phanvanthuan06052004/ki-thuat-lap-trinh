#include<bits/stdc++.h>
using namespace std;
int chuyen(int n, char source, char middleman, char destination)
{
	if(n==1)
		cout<<source<<"--->"<<destination<<endl;
	else
	{
		chuyen(n-1,source,destination,middleman);
		chuyen(1,source,middleman,destination);
		chuyen(n-1,middleman,source,destination);
	}
}
int main()
{
	int n;
	cout<<"nhap so dia: "; cin>>n;
	chuyen(n,'A','B','C');
}
