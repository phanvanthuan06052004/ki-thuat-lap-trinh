#include<bits/stdc++.h>
#define size 100
using namespace std;
int A[size][size],m,n;

void nhap(){
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}
bool maxdong(int A[size][size], int n, int x, int y){
	for(int i=0; i<n; i++)
		if(A[x][i]> A[x][y])
			return false;
	return true;
}

bool mincot(int A[size][size],int n, int x, int y){
	for(int i=0; i<m; i++)
		if(A[i][y]<A[x][y])
			return false;
	return true;
}

bool ktr(int A[size][size], int m, int n, int i, int j){
	if(maxdong(A,n,i,j) && mincot(A,m,i,j))
		return true;
	return false;
}

void xuatmaxdongmincot(){
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(ktr(A,m,n,i,j))
				cout<<A[i][j]<<" ";
		}
	}
}

int main()
{
	
	nhap();
	xuatmaxdongmincot();
	return 0;
	
}
