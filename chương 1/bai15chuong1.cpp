#include<bits/stdc++.h>
using namespace std;

struct LinhKien {
    char ten[35];
    char quyCach[15];
    char loai;
    int gia;
};
bool kiemTraDK(LinhKien A[], int n);
void xuat(bool kq);
void nhap( LinhKien A[], int &n);
void sapXepTangDanTheoLoaiTen(LinhKien A[], int n);
void xuat( LinhKien A[], int n);
void xuat1LK( LinhKien b);
void nhap1LK(LinhKien &a, int n);

int main() 
{
    LinhKien A[1000];
    int n;
    nhap(A,n);
    sapXepTangDanTheoLoaiTen(A,n);
    xuat(A,n);
    bool kq=kiemTraDK(A,n);
    xuat(kq);
    return 0;
}
bool kiemTraDK(LinhKien A[], int n)
{
	int dem=0;
	for(int i=0; i<n; i++)
		if(A[i].loai=='A' || A[i].loai=='a')
			dem++;
	if(dem>9)
		return true;
	return false;
}
void xuat(bool kq)
{
	if(kq==true)
		cout<<"Da du linh kien can thiet de lap rap may.";
	else
		cout<<"chua du linh kien";
}
void nhap( LinhKien A[], int &n)
{
	cout<<"Nhap so bo linh kien: ";
	cin>>n;
	for(int i=0; i<n; i++)
		nhap1LK(A[i],n);
}
void sapXepTangDanTheoLoaiTen(LinhKien A[], int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=i; j<n; j++)
			if((A[i].loai>A[j].loai) || (A[i].loai==A[j].loai && (strcmp(A[i].ten,A[j].ten)>0)))
			{
				LinhKien t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
}
void xuat( LinhKien A[], int n)
{
	cout<<"------------------------------------"<<endl;
	for(int i=0; i<n; i++)
		xuat1LK(A[i]);
}
void xuat1LK( LinhKien b)
{
	cout<<"Ten: "<<b.ten<<endl;
	cout<<"quy cach: "<<b.quyCach<<endl;
	cout<<"Loai: "<<b.loai<<endl;
	cout<<"Gia: "<<b.gia<<endl;
}
void nhap1LK(LinhKien &a, int n)
{
	fflush(stdin);
	cout<<"Nhap ten SP: ";
	cin.getline(a.ten,35);
	cout<<"Nhap quy cach: ";
	cin.getline(a.quyCach,15);
	cout<<"Nhap loai: ";
	cin>>a.loai;
	cout<<"Nhap Gia: ";
	cin>>a.gia;
}
