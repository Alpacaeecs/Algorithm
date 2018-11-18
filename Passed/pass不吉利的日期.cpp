//不吉利的日期 
//1800012784 刘鹏 
// 10.12
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int w, day, weekday, month, i, k;//w是输入的第一天的星期数，day是这一天和某个月13日的差距，month是所在月，i循环变量，k是这个月13rd的星期数 
	cin >> w;
	for(month = 1; month <= 12; month++)
	{
		day = 0;//清零 
		
		for(i = 1; i < month; i++)//算出这月之前的所有月份的天数和 
		{
			switch(i)
			{
				case 2 : day += 28; break;
				case 1 : ; case 3 : ; case 5 : ; case 7 : ; case 8 : ; case 10 : day += 31; break;
				default : day += 30; break;
			}
			
		}
	
	    day += 12; 
		weekday = day % 7;
		k = (w + weekday) % 7;//算出此天的星期数 
		
		if (k == 5)//周五就不吉利了 
		{
		    cout << month << endl;
		}
		
	}
	
	return 0;

} 

