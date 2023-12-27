#include<bits/stdc++.h>
using namespace std;

void taofile();
void docfile();
void sapXep(int A[], int n);

int main()
{
	taofile();
	docfile();
}
void taofile()
{
	fstream thuan;
	thuan.open("SONGUYEN.INP", ios::out|ios::binary);
	if(thuan)
	{
		int A[10];
		int n=3;
		srand((unsigned)time(NULL));
		for(int i=1; i<=n; i++)
		{
			for(int j=0; j<10; j++)
			{
				A[j]=rand()%10;
				cout<<A[j]<<" ";
			}
			sapXep(A, 10);
			thuan.write(reinterpret_cast<char *>(&A),sizeof(A));
			thuan.write("\n",1);
			cout<<endl;
		}
		thuan.close();
	}	
}
void docfile()
{
	fstream thuanin("SONGUYEN.INP",ios::in|ios::binary);
	if(!thuanin)
	{
		cout<<"Khong mo duoc file";
		exit(0);
	}
	cout<<"----------------------------------------"<<endl;
	int n=0;
	int A[10000];
	while(true)
	{
		int B[10];
		thuanin.read(reinterpret_cast<char *>(&B),sizeof(B));
		char C;
		thuanin.read(reinterpret_cast<char *>(&C),sizeof(C));
		if(thuanin.eof())
			break;
		for(int i=0; i<10;i++)
		{
			A[n]=B[i];
			n++;
		}
	}
	thuanin.close();
	sapXep(A, n);
	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<" ";
		if((i+1)%10==0)
			cout<<endl;
	}
}
void sapXep(int A[], int n)
{
    sort(A, A+n);
}

