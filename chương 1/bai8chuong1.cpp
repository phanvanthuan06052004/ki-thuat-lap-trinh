#include<bits/stdc++.h>

using namespace std;

struct TOADO {
    int x;
    int y;
};

void nhaptoado(TOADO &a);
float khoangcach(TOADO a, TOADO b);
void diemdoixung(TOADO a);

int main() 
{
    TOADO a, b;
    nhaptoado(a);
    nhaptoado(b);
    cout << "Khoang cach cua 2 toa do la: " << khoangcach(a, b) << endl;
    diemdoixung(a);
    diemdoixung(b);
    TOADO t = timtoadotam(a, b);
	cout << "Toa do tam cua hai diem la: (" << t.x << ", " << t.y << ")" << endl;

    return 0;
}

void nhaptoado(TOADO &a) 
{
    cout << "NHAP TOA DO" << endl;
    cout << "\nNhap x: ";
    cin >> a.x;
    cout << "\nNhap y: ";
    cin >> a.y;
}

float khoangcach(TOADO a, TOADO b) 
{
    float d;
    d = sqrt(pow((float)(a.x - b.x), 2) + pow((float)(a.y - b.y), 2));
    return d;
}
TOADO timtoadotam(TOADO a, TOADO b) {
    TOADO t;
    t.x = (a.x + b.x) / 2;
    t.y = (a.y + b.y) / 2;
    return t;
}


void diemdoixung(TOADO a) 
{
    if (a.x == 0) 
	{
        cout << "Diem ( 0 , " << a.y << " ) khong co diem doi xung qua truc tung" << endl;
        cout << "Diem doi xung cua ( 0 , " << a.y << " ) qua truc hoanh la ( 0 , - " << a.y << " )" << endl;
    } 
	else 
		if (a.y == 0) 
		{
       		cout << "Diem doi xung cua ( " << a.x << " , 0) qua truc tung la ( - " << a.x << " , 0 )" << endl;
        	cout << "Diem ( " << a.x << " , 0 ) khong co diem doi xung qua truc hoanh" << endl;
   		} 
		else 
		{
        	cout << "Diem doi xung qua truc tung cua ( " << a.x << " , " << a.y << " ) la: (- " << a.x << " , " << a.y << " )" << endl;
        	cout << "Diem doi xung qua truc hoanh cua ( " << a.x <<" , "<< a.y<<" ) la: ("<<  a.x << " , - " << a.y << " )" << endl;
    	}
}

