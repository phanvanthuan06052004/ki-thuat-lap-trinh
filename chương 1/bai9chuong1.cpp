#include<bits/stdc++.h>
using namespace std;

struct SoPhuc {
    float thuc; 
    float ao;  
};
    
void nhapSoPhuc(SoPhuc &sp);
void xuatSoPhuc(SoPhuc sp);
SoPhuc tongSoPhuc(SoPhuc sp1, SoPhuc sp2);
SoPhuc hieuSoPhuc(SoPhuc sp1, SoPhuc sp2);
SoPhuc tichSoPhuc(SoPhuc sp1, SoPhuc sp2);

int main() 
{
    int n;
    cout << "Nhap so luong so phuc: ";
    cin >> n;
    SoPhuc ds[n];
    cout << "*Nhap cac so phuc:\n";
    for (int i = 0; i < n; i++) 
	{
        cout << "- Nhap so phuc thu " << i+1 <<endl;
        nhapSoPhuc(ds[i]);
    }

    cout << "\n*Danh sach so phuc vua nhap:\n";
    for (int i = 0; i < n; i++) 
	{
        xuatSoPhuc(ds[i]);
    }

    SoPhuc tong = ds[0];
    SoPhuc hieu = ds[0];
    SoPhuc tich = ds[0];

    

    for (int i = 1; i < n; i++) 
	{
        tong = tongSoPhuc(tong, ds[i]);
        hieu = hieuSoPhuc(hieu, ds[i]);
        tich = tichSoPhuc(tich, ds[i]);
    }

    cout << "\n-Tong cac so phuc la: ";
    xuatSoPhuc(tong);

    cout << "\n-Hieu cac so phuc la: ";
    xuatSoPhuc(hieu);

    cout << "\n-Tich cac so phuc la: ";
    xuatSoPhuc(tich);
	
}
    
void nhapSoPhuc(SoPhuc &sp) 
{
    cout << "Nhap phan thuc: ";
    cin >> sp.thuc;
    cout << "Nhap phan ao: ";
    cin >> sp.ao;
}


void xuatSoPhuc(SoPhuc sp) 
{
    cout << sp.thuc << " + " << sp.ao << "i" << endl;
}


SoPhuc tongSoPhuc(SoPhuc sp1, SoPhuc sp2) 
{
    SoPhuc ketqua;
    ketqua.thuc = sp1.thuc + sp2.thuc;
    ketqua.ao = sp1.ao + sp2.ao;
    return ketqua;
}


SoPhuc hieuSoPhuc(SoPhuc sp1, SoPhuc sp2) 
{
    SoPhuc ketqua;
    ketqua.thuc = sp1.thuc - sp2.thuc;
    ketqua.ao = sp1.ao - sp2.ao;
    return ketqua;
}


SoPhuc tichSoPhuc(SoPhuc sp1, SoPhuc sp2) 
{
    SoPhuc ketqua;
    ketqua.thuc = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao;
    ketqua.ao = sp1.thuc * sp2.ao + sp1.ao * sp2.thuc;
    return ketqua;
}
