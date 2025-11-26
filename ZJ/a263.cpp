#include <iostream>
#include <cmath>
using namespace std;

int days_month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};   //先將所有年份每月天數一視同仁，後面再補回

bool leap(int year)
{
    return (year%4==0 && year%100!=0) || year%400==0;   //判斷閏年
}

int days(int year,int month, int day)
{
    for(int i=0;i<month-1;i++)               //5月5日=>i=0~3 =>31 28 31 30 前四個月天數再加5月的幾天 = 125天
        day+=days_month[i];
    if (month>2 && leap(year)) day++;        //如果是閏年且過了2月，還要再加上一天
    return day+365*(year-1)+(year-1)/4-(year-1)/100+(year-1)/400;  //等於當年的天數(days)+年份差異天數+加上閏年天數
}

int main()
{
    int y1,m1,d1,y2,m2,d2;
    while(cin>>y1>>m1>>d1>>y2>>m2>>d2)
    {
      cout<<abs(days(y1,m1,d1)-days(y2,m2,d2))<<endl;
    }
    return 0;
}
