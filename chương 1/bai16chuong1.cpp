#include<bits/stdc++.h>

struct MATHANG
{
	char maHang[30];
	char tenMH[9];
	char SL[20];
	char donGia[30];
	char SLTon[30];
	char baoHanh[30];
};
int maHangCoSLTonMax(MATHANG A[], int n);
void nhap1DanhSach(MATHANG A[], int &n);
void nhapThongSo(MATHANG &x);
void xuatSoLieu(MATHANG x);
int maHangCoSLTonMin(MATHANG A[], int n);
int maHangCoGiaTienMax(MATHANG A[], int n);
int matHangCoBHHon12Thang(MATHANG A[], int n);
void sapXeTangDanSLTon(MATHANG A[], int n);
void hoanDoi(MATHANG &x, MATHANG &y);
void xuat1danhsach(MATHANG A[], int n);

int main()
{
	MATHANG A[40];
	int n;
	nhap1DanhSach(A,n);
	
    fflush(stdin);
	maHangCoSLTonMax(A,n);
	
	fflush(stdin);
	maHangCoSLTonMin(A,n);
	
	fflush(stdin);
	maHangCoGiaTienMax(A,n);
	
	fflush(stdin);
	matHangCoBHHon12Thang(A,n);
	
	fflush(stdin);
	sapXeTangDanSLTon(A,n);
	xuat1danhsach(A,n);
	return 0;
}

void hoanDoi(MATHANG &x, MATHANG &y)
{
	MATHANG t = x;
	x = y;
	y = t;
}
void sapXeTangDanSLTon(MATHANG A[], int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (A[i].SLTon>A[j].SLTon)
				hoanDoi(A[i],A[j]);
}


int maHangCoSLTonMax(MATHANG A[], int n)
{
	int max=0;
	for(int i=0; i<n; i++)
		if(atoi(A[i].SLTon)>max)
			max=atoi(A[i].SLTon);
	printf("Mat hang co so luong ton nhieu nhat:\n");
	for(int j=0; j<n; j++)
		if(atoi(A[j].SLTon)==max)
			xuatSoLieu(A[j]);
}

int matHangCoBHHon12Thang(MATHANG A[], int n)
{
	printf("Mat hang co thoi gian bao hanh hon 12 thang:\n");
	for(int i=0; i<n; i++)
		if(atoi(A[i].baoHanh)>=12)
			xuatSoLieu(A[i]);
}

int maHangCoGiaTienMax(MATHANG A[], int n)
{
	int max=0;
	for(int i=0; i<n; i++)
		if(atoi(A[i].donGia)>max)
			max=atoi(A[i].donGia);
	printf("Mat hang co gia tien cao nhat:\n");
	for(int j=0; j<n; j++)
		if(atoi(A[j].donGia)==max)
			xuatSoLieu(A[j]);
}

int maHangCoSLTonMin(MATHANG A[], int n)
{
	int min;
	for(int i=0; i<n; i++)
		if(atoi(A[i].SLTon)<min)
			min=atoi(A[i].SLTon);
	printf("Mat hang co so luong ton it nhat:\n");
	for(int j=0; j<n; j++)
		if(atoi(A[j].SLTon)==min)
			xuatSoLieu(A[j]);
}

void nhap1DanhSach(MATHANG A[], int &n)
{
	printf("Nhap so mat hang: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		nhapThongSo(A[i]);
}
void nhapThongSo(MATHANG &x)
{
	printf("Nhap ma hang: ");
	fflush(stdin);
	gets(x.maHang);

	printf("Nhap ten mat hang: ");
	fflush(stdin);
	gets(x.tenMH);
	
	printf("Nhap so luong: ");
	fflush(stdin);
	gets(x.SL);
	
	printf("Nhap don gia: ");
	fflush(stdin);
	gets(x.donGia);
	
	printf("Nhap so luong ton: ");
	fflush(stdin);
	gets(x.SLTon);
	
	printf("Nhap thoi gian bao hanh(tinh theo don vi thang): ");
	fflush(stdin);
	gets(x.baoHanh);
}
void xuat1danhsach(MATHANG A[], int n)
{
	printf("sap xep tang dan theo so luong ton:\n ");
	for (int i=0;i<n;i++)
		xuatSoLieu(A[i]);
}
void xuatSoLieu(MATHANG x)
{
	printf("%s	%s	%s	%s	%s	%s\n",x.maHang,x.tenMH,x.SL,x.donGia,x.SLTon,x.baoHanh); 
}
