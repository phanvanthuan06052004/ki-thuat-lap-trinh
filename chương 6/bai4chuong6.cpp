#include <iostream>
using namespace std;

void nhap(int A[], int &n){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
}

void xoaPhanTuTrungNhau(int A[], int &n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(A[i]==A[j]){
                for(int k=j; k<n-1; k++){
                    A[k] = A[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int A[100], n;
    nhap(A,n);
    xoaPhanTuTrungNhau(A,n);
    return 0;
}

