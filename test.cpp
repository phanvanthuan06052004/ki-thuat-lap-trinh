#include<bits/stdc++.h>
#define e1 inp<<'\n'
#define NAME "BAI"
using namespace std;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
long long Rand(long long l,long long h)
{
	return l +rd() * 1LL * rd() %(h-l+1);
}
void MakeTest()
{
	ofstream inp(NAME".inp");
	int a=Rand(1,2e9), b=Rand(1,2e9);
	int << a <<' '<<b;
}
const int NTEST=10000;
int main()
{
 	srand(time(0));
 	for(int iTest=1;iTest<=NTEST;iTest++)
 	{
 		MakeTest();
 		system(NAME"TRAU.exe");
 		system(NAME".exe");
 		if(system("fc "NAME".OUT "NAME".OUT1") !=0)
 			{
 				cout<<"TEST "<< iTest <<": WRONG!\n";
				 return 0; 
			}
		cout<<"TEST "<< iTest <<": CORRECT!\n";
	}
 	return 0;
}
