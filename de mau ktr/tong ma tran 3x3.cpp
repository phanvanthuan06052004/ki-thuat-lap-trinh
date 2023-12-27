#include<bits/stdc++.h>
#define size 100
using namespace std;

void nhap(int A[][size], int &m, int &n){
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}
float tong(int A[][size],int i, int j, int m, int n){
	float sum=0;
	int X[9]={0,0,0,-1,-1,-1,1,1,1};
	int Y[9]={0,-1,1,-1,0,1,-1,0,1};
	for(int k=0; k<9; k++){
		if((i+X[k])>=0 && (i+X[k])<m && (j+Y[k])>=0 && (j+Y[k])<n)
			sum+=A[i+X[k]][j+Y[k]];
		else{
			sum=-1000000;
			return sum;
			break;
		}
	}
		
	return sum;
}

void tongmaTranMax(int A[][size], int m, int n){
	float max=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
			if(tong(A,i,j,m,n)>max)
				max=tong(A,i,j,m,n);
	}
	cout<<setprecision(2)<<fixed<<max<<endl;
}

int main(){
	int A[size][size],m,n;
	nhap(A,m,n);
	tongmaTranMax(A,m,n);
	return 0;
}
