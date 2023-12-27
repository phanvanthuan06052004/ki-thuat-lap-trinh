#include<iostream>
using namespace std;
void nhap(float &A);
int thoamanDk(float A);
int main()
{
    float A;
    nhap(A);
    int kq = thoamanDk(A);
    cout << "Gia tri n nho nhat thoa man dieu kien la: " << kq << endl;
    return 0;
}
void nhap(float &A)
{
    do{
        cout<<"nhap A( 0<A<4): ";
        cin>>A;
    } while(A<=0 || A>=4);
}
int thoamanDk(float A)
{
    float sum=0;
    int n=1;
    while (sum < A) 
    {
        sum += 1.0 / n;
        n++;
    }

    return n-1;
}

