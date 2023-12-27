#include<bits/stdc++.h>
using namespace std;


void xauConChungDaiNhat(char A[], char B[], int L[][100]){
	int m=strlen(A);
	int n=strlen(B);
	for(int i=0; i<=m; i++)
		L[i][0]=0;
	for(int i=0; i<=n; i++)
		L[0][i]=0;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			if(A[i-1]==B[j-1])
				L[i][j]=L[i-1][j-1]+1;
			else
				L[i][j]=max(L[i-1][j],L[i][j-1]);
		}
	}
	cout<<L[m][n];
}

int main(){
	char A[100],B[100];
	int L[100][100];
	gets(A);
	cin.ignore();
	gets(B);
	xauConChungDaiNhat(A,B,L);
	return 0;
}
