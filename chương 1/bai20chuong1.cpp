#include<bits/stdc++.h>
using namespace std;

void taoTT();
void docTT();

int main()
{
	taoTT();
	docTT();
}
void taoTT()
{
	fstream file;
	file.open("SOCHAN.DAT", ios::out|ios::binary);
	if(file)
	{
		int A[30];
		int n=3;
		srand((unsigned)time(NULL));
		for(int i=1; i<=n; i++)
		{
			for(int j=0; j<30; j++)
			{
				A[j]=rand()%10;
				cout<<A[j]<<" ";
			}
			file.write(reinterpret_cast<char *>(&A),sizeof(A));
			file.write("\n",1);
			cout<<endl;
		}
		file.close();
	}	
}
void docTT()
{
	fstream input("SOCHAN.DAT",ios::in|ios::binary);
	if(!input)
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
		input.read(reinterpret_cast<char *>(&B),sizeof(B));
		char C;
		input.read(reinterpret_cast<char *>(&C),sizeof(C));
		if(input.eof())
			break;
		for(int i=0; i<10;i++)
		{
			A[n]=B[i];
			n++;
		}
	}
	for(int i=0; i<n; i++)
		if(A[i]%2==0 && A[i]<101)
			input<<A[i]<<" ";
	input.close();
}

