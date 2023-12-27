#include<bits/stdc++.h>

struct PHIM
{
	char ten[30];
	char theLoai[9];
	char daoDien[30];
	char namChinh[30];
	char nuChinh[30];
	char namSX[20];
	char hangSX[20];
};
void timTheoTheloai(PHIM A[], int n, char theloai[]);
void nhap1BoPhim(PHIM A[], int &n);
void nhapPhim(PHIM &x);
void xuatPhim(PHIM x);
void timTheoNamDienVien(PHIM A[], int n, char namDV[]);
void timTheoDaoDien(PHIM A[], int n, char daoDienSX[]);

int main()
{
	PHIM A[40];
	int n;
	nhap1BoPhim(A,n);
	
	char theloai[30];
    printf("\nNhap ten the loai can tim: ");
    fflush(stdin);
    gets(theloai);
	timTheoTheloai(A,n,theloai);
	
	char namDV[30];
    printf("\nNhap ten nam dien vien can tim: ");
    fflush(stdin);
    gets(namDV);
	timTheoNamDienVien(A,n,namDV);
	
	char daoDienSX[30];
    printf("\nNhap ten dao dien can tim: ");
    fflush(stdin);
    gets(daoDienSX);
	timTheoDaoDien(A,n,daoDienSX);
	
	return 0;
}
void timTheoTheloai(PHIM A[], int n, char theloai[])
{
	printf("\ndanh sach cac bo phim thuoc the loai này:\n");
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[i].theLoai, theloai) == 0)
        {
            xuatPhim(A[i]);
            found = true;
        }
    }
    if (!found)
        printf("Khong tim thay bo phim co ten theo yeu cau \"%s\".\n", theloai);
}

void timTheoNamDienVien(PHIM A[], int n, char namDV[])
{
	printf("\ndanh sach cac bo phim cac bo phim co dien vien nay dong:\n");
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[i].namChinh, namDV) == 0)
        {
            xuatPhim(A[i]);
            found = true;
        }
    }
    if (!found)
        printf("Khong tim thay bo phim co ten theo yeu cau \"%s\".\n", namDV);
}

void timTheoDaoDien(PHIM A[], int n, char daoDienSX[])
{
	printf("\ndanh sach cac bo phim cac bo phim co dien vien nay dong:\n");
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[i].daoDien, daoDienSX) == 0)
        {
            xuatPhim(A[i]);
            found = true;
        }
    }
    if (!found)
        printf("Khong tim thay bo phim co ten theo yeu cau \"%s\".\n", daoDienSX);
}

void nhap1BoPhim(PHIM A[], int &n)
{
	printf("Nhap so bo video: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		nhapPhim(A[i]);
}
void nhapPhim(PHIM &x)
{
	printf("Nhap ten phim(tua phim): ");
	fflush(stdin);
	gets(x.ten);

	printf("Nhap the loai(hinh su, tinh cam, hai): ");
	fflush(stdin);
	gets(x.theLoai);
	
	printf("Nhap Ten dao dien: ");
	fflush(stdin);
	gets(x.daoDien);
	
	printf("Nhap ten dien vien nam chinh: ");
	fflush(stdin);
	gets(x.namChinh);
	
	printf("Nhap ten dien vien nu chinh: ");
	fflush(stdin);
	gets(x.nuChinh);
}

void xuatPhim(PHIM x)
{
	printf("%s	%s	%s	%s	%s\n",x.ten,x.theLoai,x.daoDien,x.namChinh,x.nuChinh); 
}
