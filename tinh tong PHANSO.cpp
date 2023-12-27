#include<bits/stdc++.h>
using namespace std;


struct PHANSO{
	int t,m;
};

void nhapPS(PHANSO &x);
PHANSO tinhtong(PHANSO a, PHANSO b);
void rutGon(PHANSO &x);
int UCLN(int x, int y);
void xuatPS(PHANSO x);

int main()
{
	PHANSO a,b;
	nhapPS(a);
	nhapPS(b);
	PHANSO t= tinhtong(a,b);
	PHANSO thuong;
	PHANSO kq= tinhThuong(a,b,thuong);
	if(kq==0)
		cout<<"khong chia duoc";
	else
		xuatPS(thuong);
	xuatPS(t);
	return 0;
}
void sosanh(PHANSO a, PHANSO b)
{
	if(a.t*b.m > b.t*a.m)
		return -1;
	else
		if(a.t*b.m < b.t*a.m)
			return 1;
		else
			return 0;
}
PHANSO tinhThuong(PHANSO a, PHANSO b, PHANSO thuong)
{
	if(b.t==0)
		return 0;
	thuong.t=a.t * b.m;
	thuong.m=a.m * b.t;
	chuyenHoa(thuong);
	rutGon(thuong);
	return thuong;
}
void nhapPS(PHANSO &x)
{
	cin>>x.t>>x.m;
	chuyenHoa(x);
}

PHANSO tinhtong(PHANSO a, PHANSO b)
{
	PHANSO tong;
	tong.t= a.t * b.m + a.m * b.t;
	tong.m= a.m * b.m;
	rutGon(tong);
	return tong;
}
void quyDongPS(PHANSO &a, PHANSO &b)
{
	int boichungnn=a.m * b.m/UCLN(a.m,b.m);
	a.t= a.t* boichungnn/a.m;
	b.t= b.t* boichungnn/b.m;
	
	a.m=boichungnn;
	b.m=boichungnn;
}
void chuyenHoa(PHANSO &x)
{
	if(x.m<0)
	{
		x.t=-x.t;
		x.m=-x.m;
	}
}
void rutGon(PHANSO &x)
{
	int uc= UCLN(x.t,x.m);
	x.t=x.t / uc;
	x.m=x.m / uc;
}

int UCLN(int x, int y)
{
	x=abs(x);
	y=abs(y);
	if(x*y==0)
		return x+y;
	while(x!=y)
	{
		if(x>y)
			x=x-y;
		else
			y=y-x;
	}
	return x;
}

void xuatPS(PHANSO x)
{
	cout<<x.t<<"/"<<x.m;
}
