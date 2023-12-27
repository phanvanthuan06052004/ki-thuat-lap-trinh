#include<iostream>
using namespace std;
struct date
{
	int d,m,y;
};
struct HS
{
	char MSHS[6];
	char hoten[31];
	struct date ngaysinh;
	char diachi[51];
	char gioiTinh[4];
	double diemTB;
};
void nhap1HS(HS &x);
void nhap1Lop(HS A[], int &n);
int demHSLenLop(HS A[], int n);
void xuat1Lop(HS A[], int n);
void xuat1HS(HS x);
void xuat(int kq);



int main()
{
	int n;
	HS A[50];
	nhap1Lop(A,n);
	xuat1Lop(A,n);
	int kq=demHSLenLop(A,n);
	xuat(kq);
	return 0;
}
void nhap1HS(HS &x)
{
	cout<<"Nhap MSHS: ";
	fflush(stdin);
	gets(x.MSHS);
	cout<<"NHap ho ten: ";
	gets(x.hoten);
	cout<<"Nhap ngay sinh: ";
	cin>>x.ngaysinh.d>>x.ngaysinh.m>>x.ngaysinh.y;
	cout<<"Nhap dia chi: ";
	fflush(stdin);
	gets(x.diachi);
	cout<<"Nhap gioi tinh: ";
	gets(x.gioiTinh);
	cout<<"Nhap diem TB: ";
	double t;
	cin>>t;
	x.diemTB=t;
}
void nhap1Lop(HS A[], int &n)
{
	cout<<"Nhap So HS: ";
	cin>>n;
	for(int i=0; i<n; i++)
		nhap1HS(A[i]);
}
int demHSLenLop(HS A[], int n)
{
	int d=0;
	for(int i=0; i<n; i++)
		if(A[i].diemTB>=5)
			d++;
	return d;
}
void xuat1Lop(HS A[], int n)
{
	for(int i=0; i<n; i++)
		xuat1HS(A[i]);
}
void xuat1HS(HS x)
{
	cout<<x.MSHS<<endl<<x.hoten<<endl<<x.ngaysinh.d<<"/"<<x.ngaysinh.m<<"/"<<x.ngaysinh.y<<endl<<x.diachi<<endl<<x.gioiTinh<<endl<<x.diemTB;
}
void xuat(int kq)
{
	cout<<kq;
}


