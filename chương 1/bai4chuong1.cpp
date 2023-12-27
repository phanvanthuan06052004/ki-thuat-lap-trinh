#include <iostream>
#include <cstdlib>

using namespace std;


struct DATE {
    int d;
    int m;
    int y;
};




bool kiemtra(DATE date) 
{
    int ngayTrongThang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    
    if ((date.y % 4 == 0 && date.y % 100 != 0) || date.y % 400 == 0)
        ngayTrongThang[1] = 29;

  
    if (date.m < 1 || date.m > 12)
        return false;

    if (date.d < 1 || date.d > ngayTrongThang[date.m - 1])
        return false;

    return true;
}


int tinhSoNgay(DATE date) 
{
    int ngayTrongThang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;


    for (int i = 1; i < date.m; i++)
        days += ngayTrongThang[i - 1];

  
    if (date.m > 2 && ((date.y % 4 == 0 && date.y % 100 != 0) || date.y % 400 == 0))
        days += 1;

    
    days += (date.y - 1) * 365;

   
    days += (date.y - 1) / 4;
    days -= (date.y - 1) / 100;
    days += (date.y - 1) / 400;

  
    days += date.d;

    return days;
}


int khoangCach(DATE date1, DATE date2) 
{
    int days1 = tinhSoNgay(date1);
    int days2 = tinhSoNgay(date2);


    if (days1 > days2)
        return days1 - days2;
    else
        return days2 - days1;
}
int main() 
{
    DATE date1, date2;

    
    cout << "Nhap ngay thu nhat: ";
    cin >> date1.d >> date1.m >>  date1.y;
  
    if (!kiemtra(date1)) 
	{
        cout << "Ngay thang khong hop le!" << endl;
        return 1;
    }
   
    cout << "Nhap ngay thu hai: ";
    cin >> date2.d >> date2.m >> date2.y;
   
    if (!kiemtra(date2)) 
	{
        cout << "Ngay thang khong hop le!" << endl;
        return 1;
    }
 
    int days = khoangCach(date1, date2);

    cout << "Khoang cach giua 2 ngay la: " << days << " ngay." << endl;

    return 0;
}



