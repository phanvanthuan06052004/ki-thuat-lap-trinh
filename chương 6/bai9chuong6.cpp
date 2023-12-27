#include<bits/stdc++.h>
using namespace std;


int main(){
	string S;
	getline(cin,S);
	int a=0,b=0,c=0;
	for(int i=0; i<S.size(); i++){
		if(isalpha(S[i]))
			a++;
		else
			if(isdigit(S[i]))
				b++;
			else
				c++;
	}
	cout<<"so chu cai la: "<<a<<endl;
	cout<<"so chu so la: "<<b<<endl;
	cout<<"so cac ki tu khac: "<<c<<endl;
	return 0;	
}
