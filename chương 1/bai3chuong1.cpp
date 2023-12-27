#include <iostream>
#include <math.h>
using namespace std;

struct THOIGIAN{
    int h, m, s;
};

void nhap(THOIGIAN &t1, THOIGIAN &t2);
THOIGIAN khoangCachGiay(THOIGIAN t1, THOIGIAN t2);
void xuat(THOIGIAN khoangCach);

int main()
{
    THOIGIAN t1, t2;
    nhap(t1, t2);
    THOIGIAN khoangCach = khoangCachGiay(t1, t2);
    xuat(khoangCach);
    return 0;
}

void nhap(THOIGIAN &t1, THOIGIAN &t2)
{
    cout << "Nhap vao thoi gian thu nhat:" << endl;
    cout << "Gio: "; cin >> t1.h;
    cout << "Phut: "; cin >> t1.m;
    cout << "Giay: "; cin >> t1.s;

    if (t1.h < 0 || t1.h > 23 || t1.m < 0 || t1.m > 59 || t1.s < 0 || t1.s > 59) {
        cout << "Thoi gian thu nhat khong hop le" << endl;
        exit(1);
    }

    cout << "Nhap vao thoi gian thu hai:" << endl;
    cout << "Gio: "; cin >> t2.h;
    cout << "Phut: "; cin >> t2.m;
    cout << "Giay: "; cin >> t2.s;

    if (t2.h < 0 || t2.h > 23 || t2.m < 0 || t2.m > 59 || t2.s < 0 || t2.s > 59) {
        cout << "Thoi gian thu hai khong hop le" << endl;
        exit(1);
    }
}

THOIGIAN khoangCachGiay(THOIGIAN t1, THOIGIAN t2)
{
    long long t1Giay = t1.h * 3600 + t1.m * 60 + t1.s;
    long long t2Giay = t2.h * 3600 + t2.m * 60 + t2.s;
    long long khoangCachs = abs(t2Giay - t1Giay);

    THOIGIAN tg;
    tg.h = khoangCachs / 3600;
    tg.m = (khoangCachs % 3600) / 60;
    tg.s = khoangCachs % 60;

    return tg;
}

void xuat(THOIGIAN khoangCach)
{
    cout << "Khoang cach giua hai thoi gian la: " << khoangCach.h << " gio " << khoangCach.m << " phut " << khoangCach.s << " giay" << endl;
}



