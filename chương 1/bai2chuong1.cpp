#include <bits/stdc++.h>

using namespace std;
struct PHANSO {
    int tu, mau;
};

void NhapPhanSo(PHANSO& ps);
void XuatPhanSo(PHANSO ps);
int TimUCLN(int a, int b);
void RutGonPhanSo(PHANSO& ps);
int SoSanhPhanSo(PHANSO ps1, PHANSO ps2);
PHANSO CongPhanSo(PHANSO ps1, PHANSO ps2);
PHANSO NhanPhanSo(PHANSO ps1, PHANSO ps2);
PHANSO TimPhanSoLonNhat(PHANSO ds[], int n);
PHANSO NghichDao(PHANSO p);
int main() 
{
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;
    PHANSO ds[n];
    cout << "Nhap cac phan so:\n";
    for (int i = 0; i < n; i++) 
	{
        cout << "Nhap phan so thu " << i+1 << ": ";
        NhapPhanSo(ds[i]);
    }

    cout << "\nDanh sach phan so vua nhap:\n";
    for (int i = 0; i < n; i++) 
	{
        XuatPhanSo(ds[i]);
        cout << "  ";
    }

    PHANSO tong = ds[0];
    PHANSO tich = ds[0];
 
    for (int i = 1; i < n; i++) 
	{
        tong = CongPhanSo(tong, ds[i]);
        tich = NhanPhanSo(tich, ds[i]);
    }

    cout << "\nTong cac phan so la: ";
    XuatPhanSo(tong);

    cout << "\nTich cac phan so la: ";
    XuatPhanSo(tich);

	PHANSO max = TimPhanSoLonNhat(ds, n);
	cout << "\nPhan so lon nhat la: ";
	XuatPhanSo(max);
	
	cout << "\nPhan so nghich dao cac phan so la: ";
    for (int i = 0; i < n; i++) 
	{
        PHANSO PSNgichDao = NghichDao(ds[i]);
        XuatPhanSo(PSNgichDao);
        cout << "  ";
	}
}
    



void NhapPhanSo(PHANSO& ps) 
{
    cin >> ps.tu >> ps.mau;
}

void XuatPhanSo(PHANSO ps) 
{
    cout << ps.tu << "/" << ps.mau;
}

int TimUCLN(int a, int b) 
{
    a = abs(a);
    b = abs(b);
    while (a != b) 
	{
        if (a > b) 
		{
            a -= b;
        } 
		else
			{
            	b -= a;
        	}
    }
    return a;
}

void RutGonPhanSo(PHANSO& ps) 
{
    int ucln = TimUCLN(ps.tu, ps.mau);
    ps.tu /= ucln;
    ps.mau /= ucln;
}
PHANSO TimPhanSoLonNhat(PHANSO ds[], int n) 
{
    PHANSO max = ds[0];
    for (int i = 1; i < n; i++) 
	{
        if (SoSanhPhanSo(ds[i], max) > 0) 
		{
            max = ds[i];
        }
    }
    return max;
}

int SoSanhPhanSo(PHANSO ps1, PHANSO ps2) 
{
    int tich1 = ps1.tu * ps2.mau;
    int tich2 = ps1.mau * ps2.tu;
    if (tich1 < tich2) 
	{
        return -1;
    } else if (tich1 > tich2) {
        return 1;
    } else {
        return 0;
    }
}

PHANSO CongPhanSo(PHANSO ps1, PHANSO ps2) 
{
    PHANSO ketqua;
    ketqua.tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
    ketqua.mau = ps1.mau * ps2.mau;
    RutGonPhanSo(ketqua);
    return ketqua;
}


PHANSO NhanPhanSo(PHANSO ps1, PHANSO ps2) 
{
    PHANSO ketqua;
    ketqua.tu = ps1.tu * ps2.tu;
    ketqua.mau = ps1.mau * ps2.mau;
    RutGonPhanSo(ketqua);
    return ketqua;
}

PHANSO NghichDao(PHANSO p) 
{
    PHANSO q;
    if (p.tu == 0) 
	{ 
        q.tu = 0;
        q.mau = 1;
    } 
	else 
		{
       		q.tu = p.mau;
        	q.mau = p.tu;
    	}
    return q;
}
