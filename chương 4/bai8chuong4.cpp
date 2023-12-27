#include<iostream>
#include<climits>
#define size 100
using namespace std;

int A[size];
int B[size];

void nhap(int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> A[i];
}

void xuat(int kq)
{
    cout << kq << endl;
}

bool laNT(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i*i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int soNT(int n)
{
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if (laNT(A[i]))
            B[j++] = A[i];
    }
    return j;
}

int timMin(int n)
{
    if(n == 1)
        return B[0];
    else
    {
        int x = timMin(n - 1);
        if(B[n - 1] < x)
            return B[n - 1];
        else 
            return x;
    }
}

int main()
{
    int n;
    nhap(n);
    int count = soNT(n);
    B[count] = INT_MAX;
    int kq = timMin(count + 1);
    xuat(kq);
    return 0;
}

