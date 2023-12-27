#include<bits/stdc++.h>
using namespace std;

void nhap(int A[], int &n){
    cin >> n;
    for(int i=1; i<=n; i++) 
        cin >> A[i];
}

void dayConTangMax(int A[], int B[], int n){
    B[0]=0;
    for(int i=1; i<=n; i++){
        B[i]=1;
        for(int j=1; j<i; j++)
            if(A[j]<=A[i] && B[i]<B[j]+1)
                B[i]=B[j]+1;
    }
    cout << B[n]; 
}

int main(){
    int A[100], B[100], n;
    nhap(A, n);
    dayConTangMax(A, B, n);
    return 0;
}

