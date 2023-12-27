#include <bits/stdc++.h>

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
    SoPhuc sp1, sp2, tong, hieu, tich;

    cout << "Nhap so phuc thu nhat:\n";
    nhapSoPhuc(sp1);

    cout << "Nhap so phuc thu hai:\n";
    nhapSoPhuc(sp2);

    cout << "Tong hai so phuc la:\n";
    tong = tongSoPhuc(sp1, sp2);
    xuatSoPhuc(tong);

    cout << "Hieu hai so phuc la:\n";
    hieu = hieuSoPhuc(sp1, sp2);
    xuatSoPhuc(hieu);

    cout << "Tich hai so phuc la:\n";
    tich = tichSoPhuc(sp1, sp2);
    xuatSoPhuc(tich);

    return 0;
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




