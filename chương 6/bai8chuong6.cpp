#include<iostream>
#define size 1000
using namespace std;

long long A[size][size];

void nhap(int &n){
	cin>>n;
}
void tamgiacPascal(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			if(i==j || j==0)
				A[i][j]=1;
			else{
				A[i][j]=A[i-1][j-1] + A[i-1][j];
				A[i][j] %= (int)(1e9 + 7);
			}
		}
	}
}
void xuat(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<A[i][j]<<" ";
		}
	cout<<endl;
	}
}

int main(){
	int n;
	nhap(n);
	tamgiacPascal(n);
	xuat(n);
	return 0;
}
