#include<bits/stdc++.h>

struct MAYTINH
{
	char loaiMay[30];
	char noiSX[9];
	char BaoHanh[30];
};
int soLuongMayBH1Nam(MAYTINH A[], int n);
void timxuatxuMy(MAYTINH A[], int n);
void nhap1DanhSach(MAYTINH A[], int &n);
void nhapThongSo(MAYTINH &x);
void xuatSoLieu(MAYTINH x);


int main()
{
	MAYTINH A[40];
	int n;
	nhap1DanhSach(A,n);
	
	
    fflush(stdin);
	timxuatxuMy(A,n);
	
	int sum=soLuongMayBH1Nam(A,n);
	printf("\nTong so luong may co bao hanh 1 nam: %d", sum);
	
	return 0;
}
int soLuongMayBH1Nam(MAYTINH A[], int n)
{
	int dem=0;
	for(int i=0; i<n; i++)
		if(atoi(A[i].BaoHanh) == 1)
			dem++;
	return dem;
}

void timxuatxuMy(MAYTINH A[], int n)
{
	printf("\ndanh sach cac bo may tinh co xuat xu My:\n");
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[i].noiSX,"My") == 0)
        {
            xuatSoLieu(A[i]);
            found = true;
        }
    }
    if (!found)
        printf("Khong co xuat xu My!");
}

void nhap1DanhSach(MAYTINH A[], int &n)
{
	printf("Nhap so bo may tinh: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		nhapThongSo(A[i]);
}
void nhapThongSo(MAYTINH &x)
{
	printf("Nhap loai may: ");
	fflush(stdin);
	gets(x.loaiMay);

	printf("Nhap noi san xuat: ");
	fflush(stdin);
	gets(x.noiSX);
	
	printf("Nhap thoi gian bao hanh: ");
	fflush(stdin);
	gets(x.BaoHanh);
}

void xuatSoLieu(MAYTINH x)
{
	printf("%s	%s	%s\n",x.loaiMay,x.noiSX,x.BaoHanh); 
}
