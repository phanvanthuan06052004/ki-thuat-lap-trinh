#include<bits/stdc++.h>
using namespace std;

bool ktrSN( char C)
{
	if(C>'0' && C<'9')
		return true;
	return false;
}

int tinhTongKiTu(string S, int i, int sum)
{
	if(i==S.size())
	{
		return sum;
	}
	if(ktrSN(S[i]))
		{
				int num=S[i]-'0';
				while(i+1<S.size() && ktrSN(S[i+1]) )
				{
					num=num*10+ (S[i+1]-'0');
					i++;
				}
				sum+=num;
		}
	return tinhTongKiTu(S,i+1,sum);
}
	

int main()
{
	string S;
	cin>>S;
	int sum=tinhTongKiTu(S,0,0);
	cout<<"tong tim duoc la: "<<sum<<endl;
	return 0;
}
