#include<bits/stdc++.h>
using namespace std;

void nhap(int A[], int &n){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
}
 
int maxChan(int A[], int n){
	int max=0;
	for(int i=0; i<n; i++){
		if(A[i]%2==0 && A[i]>max){
			max=A[i];
		}
	}
	return max;
} 
bool ktrtoanLe(int A[],int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(A[i]%2==1)
			dem++;
	}
	if(dem==n)
		return false;
	else
		return true;
}

bool ktrtoanChan(int A[],int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(A[i]%2==0)
			dem++;
	}
	if(dem==n)
		return false;
	else
		return true;
}

int timLeMinDk(int A[], int n){
	if(ktrtoanLe(A,n)==true && ktrtoanChan(A,n)){
		int max=maxChan(A,n);
		int min;
		for(int i=0; i<n; i++){
			if(A[i]%2==1 && A[i]<min && A[i]>max){
				min=A[i];
			}
		}
		return min;	
	}
	else
		return -1;
}
void xuat(int kq){
	cout<<kq;
}

int main(){
	int A[100],n;
	nhap(A,n);
	int kq=timLeMinDk(A,n);
	xuat(kq);
	return 0;
}
