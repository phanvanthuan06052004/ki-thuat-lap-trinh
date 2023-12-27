#include<bits/stdc++.h>
using namespace std;

void nhap(int &d, int &m, int &y);
bool nhuan(int y);
int songaytrongthang(int m,int y);
bool ktrNgayThangNamHopLe(int y, int m, int d);
void ngaytieptheo(int y,int m,int d);
int main()
{
    int d,m,y;
    nhap(d,m,y);
    ngaytieptheo(y,m,d);
    return 0;
}
void nhap(int &d, int &m, int &y)
{
	do {
    cin>>d;
    cin>>m;
    cin>>y;
  	} while (y < 1 || m < 1 || m >12 || d < 1 || d > 31);
}
bool nhuan(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int songaytrongthang(int m,int y)
{
	switch(m)
	{
    	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    {
    	return 31;
    	break;
    }
    case 2:
    {
    if(nhuan(y))
		return 29;
	else
		return 28;
    }
	case 4:case 6:case 9:case 11:
    {
		return 30;
    }   
	}
}
bool ktrNgayThangNamHopLe(int y, int m, int d)
{
	if(y>0 && m>0 && m<13 && d>0 && d<=(songaytrongthang(m,y)))
		return true;
	return false;
}
void ngaytieptheo(int y,int m,int d)
{
	int ny=y;int nm=m;int nd=d;
	if(ktrNgayThangNamHopLe(y,m,d))
  	{
    	nd=d+1;
		if(m!=12 && d==songaytrongthang(m,y))
    	{
			nd=1;
			nm=m+1;
		}
    	else 
			if(m==12 && d==songaytrongthang(m,y))
   			{
				nd=1;
				ny=y+1;
				nm=1;
    		}
    		else
				if(m==2)
    			{
      				if(nhuan(y))
      				{
        				if(d==29)
        				{
          					nd=1;
							nm=m+1;
        				}
      				}
      				else
					{
        				if(d==28)
       					{
          					nd=1;
							nm=m+1;
        				}
					}
				}	     
  	}
    cout<<nd<<" "<<nm<<" "<<ny;
}

