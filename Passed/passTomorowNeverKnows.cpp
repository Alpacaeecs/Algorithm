//Tomorrow never knows?
//1800012784 刘鹏 
// 10.12
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int y, m, d, i = 0, slip, tom, leap, month;// y, m, d是输入的日期； i是是不是12-31的标记； leap是闰年的标记； tom是第二天的日期； slip是越过这个月的下一个月； month是每月的天数  
	scanf ("%d-%d-%d", &y, &m, &d);
	
	if ((m == 12)&&(d == 31))
	{
		i = 1;//如果是十二月三十一日，标记亮，换年 
		cout << y + 1 << "-01-01";
		
	}
	
	if (((y % 400 == 0)||((y % 4 == 0)&&(y % 100 != 0)))&&(i == 0))
	{
		leap = 1;//闰年且不是一年末尾 
	}
	else
	{
		leap = 0;//不是闰年 
	}
	
	if ((leap ==  1)&&(i == 0))//是闰年 
	{
		switch(m)
		{
			case 2 : month = 29; break;
			case 4 :; case 6 :; case 9 :; case 11 : month = 30; break;
			default : month = 31; break;
		}
		
		if ( d + 1 <= month)//第二天没有到下一个月 
		{
			tom = d + 1;
			printf ("%d-%02d-%02d", y, m, tom);
		}
		else//第二天到下一个月 
		{
			slip = m + 1;
			tom = 1;
			printf ("%d-%02d-%02d", y, slip, tom);
		}
	}
	
	if ((leap ==  0)&&(i == 0))//不是闰年，下同 
	{
		switch(m)
		{
			case 2 : month = 28; break;
			case 4 :; case 6 :; case 9 :; case 11 : month = 30; break;
			default : month = 31; break;
		}
		
		if ( d + 1 <= month)
		{
			tom = d + 1;
			printf ("%d-%02d-%02d", y, m, tom);
		}
		else
		{
			slip = m + 1;
			tom = 1;
			printf ("%d-%02d-%02d", y, slip, tom);
		}
	}
	
	
    return 0 ;	
} 

