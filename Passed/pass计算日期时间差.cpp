//两个日期的时间差 
//1800012784 刘鹏 
// 10.10 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int fromYear, fromMonth, fromDate, toYear, toMonth, toDate, gapYear, inerDate, gapMonth, intermediateMonth, gapDate, i, leapfy, leapty;//太长了没法注释 
	scanf("%d%d%d%d%d%d", &fromYear, &fromMonth, &fromDate, &toYear, &toMonth, &toDate);
	gapYear = toYear - fromYear;
	leapfy = ((fromYear % 400 == 0)||((fromYear % 4 == 0)&&(fromYear % 100 != 0)));
	leapty = ((toYear % 400 == 0)||((toYear % 4 == 0)&&(toYear % 100 != 0)));
	if(gapYear == 1)
	{
		if (leapfy == 1)
		{
			switch(fromMonth)
			{
				case 1 : intermediateMonth = 366 - fromDate; break;
				case 2 : intermediateMonth = 366 - 31 - fromDate; break;
				case 3 : intermediateMonth = 366 - 31 - 29 -fromDate; break;
				case 4 : intermediateMonth = 366 - 31 * 2 - 29 - fromDate; break;
				case 5 : intermediateMonth = 366 - 31 * 2 - 29 - 30 - fromDate; break;
				case 6 : intermediateMonth = 366 - 31 * 3 - 29 - 30 - fromDate; break;
				case 7 : intermediateMonth = 366 - 31 * 3 - 29 - 30 * 2 - fromDate; break;
				case 8 : intermediateMonth = 366 - 31 * 4 - 29 - 30 * 2 - fromDate; break;
				case 9 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 2 - fromDate; break;
				case 10 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 3 - fromDate; break;
				case 11 : intermediateMonth = 366 - 31 * 6 - 29 - 30 * 3 - fromDate; break;
				default : intermediateMonth = 31 - fromDate; break;
			}
			
		}
		else
		{
			switch(fromMonth)
			{
				case 1 : intermediateMonth = 365 - fromDate; break;
				case 2 : intermediateMonth = 365 - 31 - fromDate; break;
				case 3 : intermediateMonth = 366 - 31 - 29 -fromDate; break;
				case 4 : intermediateMonth = 366 - 31 * 2 - 29 - fromDate; break;
				case 5 : intermediateMonth = 366 - 31 * 2 - 29 - 30 - fromDate; break;
				case 6 : intermediateMonth = 366 - 31 * 3 - 29 - 30 - fromDate; break;
				case 7 : intermediateMonth = 366 - 31 * 3 - 29 - 30 * 2 - fromDate; break;
				case 8 : intermediateMonth = 366 - 31 * 4 - 29 - 30 * 2 - fromDate; break;
				case 9 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 2 - fromDate; break;
				case 10 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 3 - fromDate; break;
				case 11 : intermediateMonth = 366 - 31 * 6 - 29 - 30 * 3 - fromDate; break;
				default : intermediateMonth = 31 - fromDate; break;
			}
			
		}
		
		if (leapty == 1)
		{
			switch(toMonth)
			{
				case 1 : gapMonth = toDate ; break;
				case 2 : gapMonth = 31 + toDate; break;
				case 3 : gapMonth = 31 + 29 + toDate; break;
				case 4 : gapMonth = 31 * 2 + 29 + toDate; break;
				case 5 : gapMonth = 31 * 2 + 29 + 30 + toDate; break;
				case 6 : gapMonth = 31 * 3 + 29 + 30 + toDate; break;
				case 7 : gapMonth = 31 * 3 + 29 + 30 * 2 + toDate; break;
				case 8 : gapMonth = 31 * 4 + 29 + 30 * 2 + toDate; break;
				case 9 : gapMonth = 31 * 5 + 29 + 30 * 2 + toDate; break;
				case 10 : gapMonth = 31 * 5 + 29 + 30 * 3 + toDate; break;
				case 11 : gapMonth = 31 * 6 + 29 + 30 * 3 + toDate; break;
				default : gapMonth = 31 * 6 + 29 + 30 * 4 + toDate; break;
			}
			
		}
		else
		{
			switch(toMonth)
			{
				case 1 : gapMonth = toDate ; break;
				case 2 : gapMonth = 31 + toDate; break;
				case 3 : gapMonth = 31 + 28 + toDate; break;
				case 4 : gapMonth = 31 * 2 + 28 + toDate; break;
				case 5 : gapMonth = 31 * 2 + 28 + 30 + toDate; break;
				case 6 : gapMonth = 31 * 3 + 28 + 30 + toDate; break;
				case 7 : gapMonth = 31 * 3 + 28 + 30 * 2 + toDate; break;
				case 8 : gapMonth = 31 * 4 + 28 + 30 * 2 + toDate; break;
				case 9 : gapMonth = 31 * 5 + 28 + 30 * 2 + toDate; break;
				case 10 : gapMonth = 31 * 5 + 28 + 30 * 3 + toDate; break;
				case 11 : gapMonth = 31 * 6 + 28 + 30 * 3 + toDate; break;
				default : gapMonth = 31 * 6 + 28 + 30 * 4 + toDate; break;
			}
			
		}
		
		cout << intermediateMonth + gapMonth << endl;
		
	} 
	else if (gapYear > 1)
	{
		inerDate = 0;
		for (i = fromYear + 1; i < toYear; i++)
		{
			inerDate += 365 + ((i % 400 == 0)||((i % 4 == 0)&&(i % 100 != 0)));
		}
		
		if (leapfy == 1)
		{
			switch(fromMonth)
			{
				case 1 : intermediateMonth = 366 - fromDate; break;
				case 2 : intermediateMonth = 366 - 31 - fromDate; break;
				case 3 : intermediateMonth = 366 - 31 - 29 -fromDate; break;
				case 4 : intermediateMonth = 366 - 31 * 2 - 29 - fromDate; break;
				case 5 : intermediateMonth = 366 - 31 * 2 - 29 - 30 - fromDate; break;
				case 6 : intermediateMonth = 366 - 31 * 3 - 29 - 30 - fromDate; break;
				case 7 : intermediateMonth = 366 - 31 * 3 - 29 - 30 * 2 - fromDate; break;
				case 8 : intermediateMonth = 366 - 31 * 4 - 29 - 30 * 2 - fromDate; break;
				case 9 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 2 - fromDate; break;
				case 10 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 3 - fromDate; break;
				case 11 : intermediateMonth = 366 - 31 * 6 - 29 - 30 * 3 - fromDate; break;
				default : intermediateMonth = 31 - fromDate; break;
			}
			
		}
		else
		{
			switch(fromMonth)
			{
				case 1 : intermediateMonth = 365 - fromDate; break;
				case 2 : intermediateMonth = 365 - 31 - fromDate; break;
				case 3 : intermediateMonth = 366 - 31 - 29 -fromDate; break;
				case 4 : intermediateMonth = 366 - 31 * 2 - 29 - fromDate; break;
				case 5 : intermediateMonth = 366 - 31 * 2 - 29 - 30 - fromDate; break;
				case 6 : intermediateMonth = 366 - 31 * 3 - 29 - 30 - fromDate; break;
				case 7 : intermediateMonth = 366 - 31 * 3 - 29 - 30 * 2 - fromDate; break;
				case 8 : intermediateMonth = 366 - 31 * 4 - 29 - 30 * 2 - fromDate; break;
				case 9 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 2 - fromDate; break;
				case 10 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 3 - fromDate; break;
				case 11 : intermediateMonth = 366 - 31 * 6 - 29 - 30 * 3 - fromDate; break;
				default : intermediateMonth = 31 - fromDate; break;
			}
			
		}
		
		if (leapty == 1)
		{
			switch(toMonth)
			{
				case 1 : gapMonth = toDate ; break;
				case 2 : gapMonth = 31 + toDate; break;
				case 3 : gapMonth = 31 + 29 + toDate; break;
				case 4 : gapMonth = 31 * 2 + 29 + toDate; break;
				case 5 : gapMonth = 31 * 2 + 29 + 30 + toDate; break;
				case 6 : gapMonth = 31 * 3 + 29 + 30 + toDate; break;
				case 7 : gapMonth = 31 * 3 + 29 + 30 * 2 + toDate; break;
				case 8 : gapMonth = 31 * 4 + 29 + 30 * 2 + toDate; break;
				case 9 : gapMonth = 31 * 5 + 29 + 30 * 2 + toDate; break;
				case 10 : gapMonth = 31 * 5 + 29 + 30 * 3 + toDate; break;
				case 11 : gapMonth = 31 * 6 + 29 + 30 * 3 + toDate; break;
				default : gapMonth = 31 * 6 + 29 + 30 * 4 + toDate; break;
			}
			
		}
		else
		{
			switch(toMonth)
			{
				case 1 : gapMonth = toDate ; break;
				case 2 : gapMonth = 31 + toDate; break;
				case 3 : gapMonth = 31 + 28 + toDate; break;
				case 4 : gapMonth = 31 * 2 + 28 + toDate; break;
				case 5 : gapMonth = 31 * 2 + 28 + 30 + toDate; break;
				case 6 : gapMonth = 31 * 3 + 28 + 30 + toDate; break;
				case 7 : gapMonth = 31 * 3 + 28 + 30 * 2 + toDate; break;
				case 8 : gapMonth = 31 * 4 + 28 + 30 * 2 + toDate; break;
				case 9 : gapMonth = 31 * 5 + 28 + 30 * 2 + toDate; break;
				case 10 : gapMonth = 31 * 5 + 28 + 30 * 3 + toDate; break;
				case 11 : gapMonth = 31 * 6 + 28 + 30 * 3 + toDate; break;
				default : gapMonth = 31 * 6 + 28 + 30 * 4 + toDate; break;
			}
			
		}
		
		cout << intermediateMonth + gapMonth + inerDate << endl;
	}
	else
	{
		if (leapty == 1)
		{
			switch(fromMonth)
			{
				case 1 : gapMonth = fromDate ; break;
				case 2 : gapMonth = 31 + fromDate; break;
				case 3 : gapMonth = 31 + 29 + fromDate; break;
				case 4 : gapMonth = 31 * 2 + 29 + fromDate; break;
				case 5 : gapMonth = 31 * 2 + 29 + 30 + fromDate; break;
				case 6 : gapMonth = 31 * 3 + 29 + 30 + fromDate; break;
				case 7 : gapMonth = 31 * 3 + 29 + 30 * 2 + fromDate; break;
				case 8 : gapMonth = 31 * 4 + 29 + 30 * 2 + fromDate; break;
				case 9 : gapMonth = 31 * 5 + 29 + 30 * 2 + fromDate; break;
				case 10 : gapMonth = 31 * 5 + 29 + 30 * 3 + fromDate; break;
				case 11 : gapMonth = 31 * 6 + 29 + 30 * 3 + fromDate; break;
				default : gapMonth = 31 * 6 + 29 + 30 * 4 + fromDate; break;
			}
			
			switch(toMonth)
			{
				case 1 : intermediateMonth = 366 - toDate; break;
				case 2 : intermediateMonth = 366 - 31 - toDate; break;
				case 3 : intermediateMonth = 366 - 31 - 29 -toDate; break;
				case 4 : intermediateMonth = 366 - 31 * 2 - 29 - toDate; break;
				case 5 : intermediateMonth = 366 - 31 * 2 - 29 - 30 - toDate; break;
				case 6 : intermediateMonth = 366 - 31 * 3 - 29 - 30 - toDate; break;
				case 7 : intermediateMonth = 366 - 31 * 3 - 29 - 30 * 2 - toDate; break;
				case 8 : intermediateMonth = 366 - 31 * 4 - 29 - 30 * 2 - toDate; break;
				case 9 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 2 - toDate; break;
				case 10 : intermediateMonth = 366 - 31 * 5 - 29 - 30 * 3 - toDate; break;
				case 11 : intermediateMonth = 366 - 31 * 6 - 29 - 30 * 3 - toDate; break;
				default : intermediateMonth = 31 - toDate ; break;
			}
			
			cout << 366 - gapMonth - intermediateMonth << endl;
			
		}
		else
		{
			switch(fromMonth)
			{
				case 1 : gapMonth = fromDate ; break;
				case 2 : gapMonth = 31 + fromDate; break;
				case 3 : gapMonth = 31 + 28 + fromDate; break;
				case 4 : gapMonth = 31 * 2 + 28 + fromDate; break;
				case 5 : gapMonth = 31 * 2 + 28 + 30 + fromDate; break;
				case 6 : gapMonth = 31 * 3 + 28 + 30 + fromDate; break;
				case 7 : gapMonth = 31 * 3 + 28 + 30 * 2 + fromDate; break;
				case 8 : gapMonth = 31 * 4 + 28 + 30 * 2 + fromDate; break;
				case 9 : gapMonth = 31 * 5 + 28 + 30 * 2 + fromDate; break;
				case 10 : gapMonth = 31 * 5 + 28 + 30 * 3 + fromDate; break;
				case 11 : gapMonth = 31 * 6 + 28 + 30 * 3 + fromDate; break;
				default : gapMonth = 31 * 6 + 28 + 30 * 4 + fromDate; break;
			}
			
			switch(toMonth)
			{
				case 1 : intermediateMonth = 365 - toDate; break;
				case 2 : intermediateMonth = 365 - 31 - toDate; break;
				case 3 : intermediateMonth = 365 - 31 - 28 -toDate; break;
				case 4 : intermediateMonth = 365 - 31 * 2 - 28 - toDate; break;
				case 5 : intermediateMonth = 365 - 31 * 2 - 28 - 30 - toDate; break;
				case 6 : intermediateMonth = 365 - 31 * 3 - 28 - 30 - toDate; break;
				case 7 : intermediateMonth = 365 - 31 * 3 - 28 - 30 * 2 - toDate; break;
				case 8 : intermediateMonth = 365 - 31 * 4 - 28 - 30 * 2 - toDate; break;
				case 9 : intermediateMonth = 365 - 31 * 5 - 28 - 30 * 2 - toDate; break;
				case 10 : intermediateMonth = 365 - 31 * 5 - 28 - 30 * 3 - toDate; break;
				case 11 : intermediateMonth = 365 - 31 * 6 - 28 - 30 * 3 - toDate; break;
				default : intermediateMonth = 31 - toDate ; break;
			}
			
			cout << 365 - gapMonth - intermediateMonth << endl;
		}
	}
	return 0;
 } 

