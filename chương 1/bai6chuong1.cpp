#include<bits/stdc++.h>
using namespace std;
struct PHANSO
{
	int t,m;
};
int sosanh(PHANSO a, PHANSO b);
void quydong(PHANSO &a, PHANSO &b);
int tinhThuong(PHANSO a, PHANSO b, PHANSO &thuong);
void nhapPhanSo(PHANSO &x);
PHANSO tinhTong(PHANSO a, PHANSO b );
void chuyenHoa(PHANSO &a);
void rutgonPS(PHANSO &x);
void xuatPS(PHANSO x);
int UCLN(int x, int y);
void xuat(PHANSO a, PHANSO b);
int main()
{
	PHANSO a,b;
	nhapPhanSo(a);
	nhapPhanSo(b);
	PHANSO t=tinhTong(a,b);
	xuatPS(t);
	
	PHANSO thuong;
	int kq=tinhThuong(a,b,thuong);
	if(kq==0)
		cout<<"khong chia duoc";
	else
		xuatPS(thuong);
	
	quydong(a,b);
	xuat(a,b);
	
	int kq2=sosanh(a,b);
	cout<<endl<<"ket qua so sanh: "<<kq2;
	return 0;	
}
void xuat(PHANSO a, PHANSO b)
{
	cout<<"quy dong cac ps: "<<endl;
	cout<<a.t<<"/"<<a.m<<endl<<b.t<<"/"<<b.m;
}


int sosanh(PHANSO a, PHANSO b)
{
	float x1=(float)a.t/a.m;
	float x2=(float)b.t/b.m;
	if(x1<x2)
		return 1;
	else
		if(x1==x2)
			return 0;
		else
			return -1;
}
void quydong(PHANSO &a, PHANSO &b)
{
	int bcnn=a.m*b.m/UCLN(a.m,b.m);
	a.t=a.t * bcnn/a.m;
	b.t=b.t * bcnn/b.m;
	a.m=bcnn;
	b.m=bcnn;
}
int tinhThuong(PHANSO a, PHANSO b, PHANSO &thuong)
{
	if(b.t==0)
		return 0;
	thuong.t=a.t*b.m;
	thuong.m=a.m*b.t;
	rutgonPS(thuong);
	return 1;
	
}

void nhapPhanSo(PHANSO &x)
{
	cin>>x.t>>x.m;
	chuyenHoa(x);
}
PHANSO tinhTong(PHANSO a, PHANSO b )
{
	PHANSO tong;
	tong.t=a.t*b.m + b.t*a.m;
	tong.m=a.m*b.m;
	chuyenHoa(tong);
	rutgonPS(tong);
	return tong;
}
void chuyenHoa(PHANSO &a)
{
	if(a.m<0)
	{
		a.t=-a.t;
		a.m=-a.m;
	}
}
void rutgonPS(PHANSO &x)
{
	int uocchung=UCLN(x.t,x.m);
	x.t=x.t/uocchung;
	x.m=x.m/uocchung;
}
int UCLN(int x, int y)
{
	x=abs(x);
	y=abs(y);
	if(x*y==0)
		return x+y;
	while(x!=y)
		if(x>y)
			x=x-y;
		else
			y=y-x;
	return x;
}
void xuatPS(PHANSO x)
{
	cout<<x.t<<"/"<<x.m<<endl;
}
