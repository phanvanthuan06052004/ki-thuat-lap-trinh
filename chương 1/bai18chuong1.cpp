#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	fstream thuan;
	thuan.open("SONGUYEN.INP", ios::out);
	if(thuan)
	{
		int n=10000, dem=0;
		int B[32768]={0};
		srand((unsigned)time(NULL));
		while(dem<n)
		{
			int t=rand()%32768;	
			if(B[t]==0)
			{
				B[t]=1;
				thuan<<t<<" ";
				dem++;
			}		 
		}
		thuan.close();
	}
}




