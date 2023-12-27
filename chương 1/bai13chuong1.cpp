#include<bits/stdc++.h>

struct SACH
{
	char MSS[30];
	char TenSach[9];
	char TacGia[30];
	char SL[30];
};

void nhap1DauSach(SACH A[], int &n);
void nhapSach(SACH &x);
void xuatSach(SACH x);
void timTheotenSach(SACH A[], int n, char tenS[]);
int tinhtong(SACH A[], int n);

int main()
{
	SACH A[40];
	int n;
	nhap1DauSach(A,n);
	
	char tenS[30];
    printf("\nNhap ten sach can tim: ");
    fflush(stdin);
    gets(tenS);
	timTheotenSach(A,n,tenS);
	
	int sum=tinhtong(A,n);
	printf("\nTong so luong sach co trong thu vien la: %d", sum);
	
	return 0;
}
int tinhtong(SACH A[], int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
		sum=sum+atoi(A[i].SL);
	return sum;
}

void timTheotenSach(SACH A[], int n, char tenS[])
{
	printf("\ndanh sach cac bo sach theo ten:\n");
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[i].TenSach, tenS) == 0)
        {
            xuatSach(A[i]);
            found = true;
        }
    }
    if (!found)
        printf("Khong tim thay! \"%s\".\n", tenS);
}

void nhap1DauSach(SACH A[], int &n)
{
	printf("Nhap so bo sach(toi da 100): ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		nhapSach(A[i]);
}
void nhapSach(SACH &x)
{
	printf("Nhap ma so sach: ");
	fflush(stdin);
	gets(x.MSS);

	printf("Nhap ten sach: ");
	fflush(stdin);
	gets(x.TenSach);
	
	printf("Nhap tac gia: ");
	fflush(stdin);
	gets(x.TacGia);
	
	printf("Nhap so luong: ");
	fflush(stdin);
	gets(x.SL);
}

void xuatSach(SACH x)
{
	printf("%s	%s	%s	%s\n",x.MSS,x.TenSach,x.TacGia,x.SL); 
}
