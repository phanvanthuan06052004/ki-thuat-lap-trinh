#include<bits/stdc++.h>

struct SV
{
	char Hoten[30];
	char MSV[9];
	char ns[15];
	float toan,ly,hoa,dtb;
};
void xuatSV(SV x);
void nhapSV(SV &x);
void xuat1Lop(SV A[], int n);
void nhap1Lop(SV A[], int &n);
void tinhDTB(SV A[], int n);
SV timSVDTBMax(SV A[], int n);
void hoanDoi(SV &x, SV &y);
void sapXepDTB(SV A[], int n);
void sapXepDiemToan(SV A[], int n);
void timKiem(SV A[], int n);
void timSVTuoiMax(SV A[], int n);
void timSVTheoTen(SV A[], int n, char ten[]);

int main()
{
	SV A[40];
	int n;
	nhap1Lop(A,n);
	tinhDTB(A,n);
	
	printf("\ndanh sach sap xep theo DTB tang dan: \n");
	sapXepDTB(A,n);
	xuat1Lop(A,n);
	
	printf("\ndanh sach sap xep theo diem Toan giam dan: \n");
	sapXepDiemToan(A,n);
	xuat1Lop(A,n);
	
	timKiem(A, n);
	
	timSVTuoiMax(A,n);
	
	printf("\nsinh vien co DTB lon nhat: \n");
	SV x=timSVDTBMax(A,n);
	xuatSV(x);
	
	char ten[30];
    printf("\nNhap ten sinh vien can tim: ");
    fflush(stdin);
    gets(ten);
    timSVTheoTen(A, n, ten);
	
}
void timSVTheoTen(SV A[], int n, char ten[])
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[i].Hoten, ten) == 0)
        {
            xuatSV(A[i]);
            found = true;
        }
    }
    if (!found)
        printf("Khong tim thay sinh vien co ten \"%s\".\n", ten);
}

void hoanDoi(SV &x, SV &y)
{
	SV t = x;
	x = y;
	y = t;
}
void sapXepDTB(SV A[], int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (A[i].dtb>A[j].dtb)
				hoanDoi(A[i],A[j]);
}

void timKiem(SV A[], int n)
{
    printf("\nDanh sach sinh vien co DTB > 5 va khong co mon nao duoi 3:\n");
    for (int i=0; i<n; i++)
    {
        if (A[i].dtb > 5 && A[i].toan >= 3 && A[i].ly >= 3 && A[i].hoa >= 3)
            xuatSV(A[i]);
    }
}

void timSVTuoiMax(SV A[], int n)
{
    int i, maxTuoi = 0;
    for (i = 0; i < n; i++) 
	{
        int tuoi = 2023 - atoi(A[i].ns);
        if (tuoi > maxTuoi) 
		{
            maxTuoi = tuoi;
        }
    }
    printf("\nSinh vien co tuoi lon nhat: \n");
    for (i = 0; i < n; i++) 
	{
        int tuoi = 2023 - atoi(A[i].ns);
        if (tuoi == maxTuoi) 
        {
        	xuatSV(A[i]);
		}
    }
}


void sapXepDiemToan(SV A[], int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (A[i].toan<A[j].toan)
				hoanDoi(A[i],A[j]);
}

SV timSVDTBMax(SV A[], int n)
{
	float max=A[0].dtb;
	int vitri=0;
	for (int i=0;i<n;i++)
		if (A[i].dtb>max)
		{
			max = A[i].dtb;
			vitri=i;
		}
	return A[vitri];
}
void tinhDTB(SV A[], int n)
{
	for (int i=0;i<n;i++)
		A[i].dtb = (A[i].toan+A[i].ly+A[i].hoa)/3;
}
void xuat1Lop(SV A[], int n)
{
	for (int i=0;i<n;i++)
		xuatSV(A[i]);
}
void nhap1Lop(SV A[], int &n)
{
	printf("Nhap so SV: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		nhapSV(A[i]);
}
void nhapSV(SV &x)
{
	printf("Nhap MSSV: ");
	fflush(stdin);
	gets(x.MSV);

	printf("Nhap ho ten: ");
	fflush(stdin);
	gets(x.Hoten);
	
	printf("Nam sinh: ");
	fflush(stdin);
	gets(x.ns);
	
	printf("Nhap diem 3 mon: ");
	float t,l,h;
	scanf("%f%f%f",&t,&l,&h);
	x.toan = t;
	x.ly = l;
	x.hoa = h;
}

void xuatSV(SV x)
{
	printf("%s	%s	%s	%0.2f	%0.2f	%0.2f	%0.2f\n",x.MSV,x.Hoten,x.ns,x.toan,x.ly,x.hoa,x.dtb); 
}
