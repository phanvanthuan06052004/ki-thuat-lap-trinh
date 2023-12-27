#include<bits/stdc++.h>
using namespace std;
struct PHANSO
{
	int t,m;
};
struct HONSO{
	int nguyen;
	PHANSO pso;
};
void nhap(HONSO &x);
HONSO tinhtong(HONSO a, HONSO b);
PHANSO chyenHSsangPS(HONSO a);
HONSO chuyenPSsangHS(PHANSO z);
void rutgonPS(PHANSO &x);
int UCLN(int x, int y);
void xuat(HONSO sum);
void xuatPS(PHANSO x);
void chuyenHoa(PHANSO &a);
void nhapPhanSo(PHANSO &x);
PHANSO tinhtongPS(PHANSO x, PHANSO y);
HONSO tinhTich(HONSO a, HONSO b);
PHANSO tinhTichPS(PHANSO x, PHANSO y);

int main()
{
	HONSO a,b;
	nhap(a);
	nhap(b);
	HONSO sum=tinhtong(a,b);
	xuat(sum);
	HONSO t=tinhTich(a,b);
	xuat(t);
	return 0;
	
}
void xuat(HONSO sum)
{
	cout<<sum.nguyen<<" ";
	xuatPS(sum.pso);
}
void xuatPS(PHANSO x)
{
	cout<<x.t<<"/"<<x.m<<endl;
}
void nhap(HONSO &x)
{
	cin>>x.nguyen;
	nhapPhanSo(x.pso);
}
void chuyenHoa(PHANSO &a)
{
	if(a.m<0)
	{
		a.t=-a.t;
		a.m=-a.m;
	}
}
void nhapPhanSo(PHANSO &x)
{
	cin>>x.t>>x.m;
	chuyenHoa(x);
}
HONSO tinhtong(HONSO a, HONSO b)
{
	PHANSO x=chyenHSsangPS(a);
	PHANSO y=chyenHSsangPS(b);
	PHANSO z=tinhtongPS(x,y);
	HONSO kq=chuyenPSsangHS(z);
	return kq;
}
HONSO tinhTich(HONSO a, HONSO b)
{
	PHANSO x=chyenHSsangPS(a);
	PHANSO y=chyenHSsangPS(b);
	PHANSO z=tinhTichPS(x,y);
	HONSO kq=chuyenPSsangHS(z);
	return kq;
}
PHANSO tinhtongPS(PHANSO x, PHANSO y)
{
	PHANSO sum;
	sum.t=x.t*y.m + x.m*y.t;
	sum.m=x.m*y.m;
	rutgonPS(sum);
	return sum;
}
PHANSO tinhTichPS(PHANSO x, PHANSO y)
{
	PHANSO a;
	a.t=x.t*y.t;
	a.m=x.m*y.m;
	return a;
}
PHANSO chyenHSsangPS(HONSO a)
{
	PHANSO kq;
	kq.m=a.pso.m;
	kq.t=a.pso.t+a.nguyen*a.pso.m;
	rutgonPS(kq);
	return kq;
}
HONSO chuyenPSsangHS(PHANSO z)
{
	HONSO t;
	t.nguyen= z.t/z.m;
	t.pso.t=z.t % z.m;
	t.pso.m=z.m;
	return t;
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
