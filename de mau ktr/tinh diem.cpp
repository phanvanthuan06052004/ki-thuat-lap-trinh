#include<bits/stdc++.h>
using namespace std;

void tinhdiem(char S[]){
	int lt=0;
	int sum=0;
	int len=strlen(S);
	for(int i=0; i<len; i++){
		if(S[i]=='V'){
			lt++;
		}
		else{
			sum+=(lt*(lt+1))/2;
			lt=0;
		}
	}
	if(lt!=0)
		sum+=(lt*(lt+1))/2;
	cout<<sum;
}

int main(){
	char S[101];
	gets(S);
	tinhdiem(S);
	return 0;
}
