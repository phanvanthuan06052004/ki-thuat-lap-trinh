#include<bits/stdc++.h>
using namespace std;

void nhap(int &x, int &n);
double luyThuaCoSoE(int x, int n);
void xuat(double kq);

int main()
{
    int x, n;
    nhap(x, n);
    double kq = luyThuaCoSoE(x, n);  
    xuat(kq);
    return 0;
}

void nhap(int &x, int &n)
{
    cout << "Nhap x: ";
    cin >> x;
    do {
        cout << "Nhap n (n > 0): ";
        cin >> n;
    } while (n <= 0);
}

double luyThuaCoSoE(int x, int n)
{
    double t = 1;
    double s = 1;
    for (int i = 1; i <= n; i++)
    {
        t = t * x / i;
        s = s + t;
    }
    return s;
}

void xuat(double kq)
{
    cout <<setprecision(2) << fixed << kq;
}

