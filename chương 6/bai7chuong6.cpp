#include<iostream>
using namespace std;

void nhap(int A[], int &n){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}

void xuat(int A[], int n){
	for(int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}		
}

void lietKeMangTangDan(int A[], int n){
	int B[100],max=0,C[100],vt;
	for(int i=0; i<n; i++){
		int j=0;
		B[j]=A[i];
		while(A[i]<A[i+1] && i<n-1){
			i++;
			j++;
			B[j]=A[i];
		}
		if(j>=1){
			int sum=0;
			for(int i=0; i<j+1; i++){
				sum+=B[i];
			}
			if(sum>max){
				max=sum;
				for(int k=0; k<j+1; k++){
					C[k]=B[k];
					vt=k;
				}
			}
				
			
		}
	}
	xuat(C,vt+1);
}

int main(){
	int A[100],n;
	nhap(A,n);
	lietKeMangTangDan(A,n);
	return 0;
}
