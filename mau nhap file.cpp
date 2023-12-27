#include<bits/stdc++.h>
using namespace std;
void nhap(int A[], int &n);
void docfile(int A[], int &n);
void ghifile(int A[], int n);
int main()
{
//	ifstream input("vidu.txt");
//	if(input.fail())
//	{
//		cout<<"khong mo duoc file!";
//		return -1;
//	}
//	while(!input.eof())
//	{
//		int n;
//		input>>n;
//		cout<<n<<" ";
//	}
//	input.close();
//	return 0;
	int A[100],n;
	nhap(A,n);
	docfile(A,n);
	ghifile(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void docfile(int A[], int &n)
{
	fstream input("vidu.txt", ios::in);
	if(input.fail())
	{
		cout<<"ko mo duoc file";
		exit(0);
	}
	n=0;
	while(true)
	{
		int x;
		input>>x;
		if(input.eof())
			break;
		A[n]=x;
		n++;
	}
	input.close();
}
void ghifile(int A[], int n)
{
	fstream output;
	output.open("ketqua.txt",ios::out);
	output<<n<<endl;
	for(int i=0; i<n; i++)
		output<<A[i]<<" ";
	output.close();
}

