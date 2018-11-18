//日历计算器 
//1800012784 刘鹏 
// 10.12
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int y, m, d, g, leap, da, i, ord, f, r, sum, left, week;//实在是太复杂，过一会我再补注释 
	char l;
	l = '-';
	while (cin >> g)
	{
		if( g == -1)
		    break;
		    
		if (g <= 365)
		{
			y = 2000;
			d = 0;
			for (m = 1; d <= g;)
			{
				switch (m)
				{
					case 2 : d += 29; m = m + 1; break;
					case 4 :; case 6 :; case 9 :; case 11: d += 30; m = m + 1; break;
					default : d += 31; m = m + 1; break;
				}
				
			}
			
			switch (m - 1)
				{
					case 2 : d -= 29; break;
					case 4 :; case 6 :; case 9 :; case 11: d -= 30; break;
					default : d -= 31; break;
				}
				
			m = m - 1;
			da = g - d + 1;
			
		}
		else
		{
			i = (int) g / 365;
			y = 2000 + i;
			r = 0;
			sum = 0;
			for (ord = 2000; ord < y; ord ++)
			{
				r = 365 + ((ord % 400 == 0)||((ord % 4 ==0)&&(ord % 100 != 0))) ;
				sum += r;
			}
			
			left = g - sum ;
			
			
			
			if ((y % 400 == 0)||((y % 4 ==0)&&(y % 100 != 0)))
			{
				d = 0;
			for (m = 1; d <= left;)
			{
				switch (m)
				{
					case 2 : d += 29; m = m + 1; break;
					case 4 :; case 6 :; case 9 :; case 11: d += 30; m = m + 1; break;
					default : d += 31; m = m + 1; break;
				}
				
			}
			
			switch (m - 1)
				{
					case 2 : d -= 29; break;
					case 4 :; case 6 :; case 9 :; case 11: d -= 30; break;
					default : d -= 31; break;
				}
				
			m = m - 1;
			da = left - d + 1;
			}
			else
			{
				d = 0;
			for (m = 1; d <= left;)
			{
				switch (m)
				{
					case 2 : d += 28; m = m + 1; break;
					case 4 :; case 6 :; case 9 :; case 11: d += 30; m = m + 1; break;
					default : d += 31; m = m + 1; break;
				}
				
			}
			
			switch (m - 1)
				{
					case 2 : d -= 28; break;
					case 4 :; case 6 :; case 9 :; case 11: d -= 30; break;
					default : d -= 31; break;
				}
				
			m = m - 1;
			da = left - d + 1 ;
			}
			
	
			
		}
		
		if( m == 0)
		{
		
		    cout << y - 1 << l << "12" ;
		    printf ("-%02d", da);
		    
	    
		}
		else
		{
			printf("%d-%02d-%02d", y, m, da);
		}	
		
		week =  g % 7;
		switch (week)
		{
			case 0 : cout << " Saturday" << endl; break;
			case 1 : cout << " Sunday" << endl; break;
			case 2 : cout << " Monday" << endl; break;
			case 3 : cout << " Tuesday" << endl; break;
			case 4 : cout << " Wednesday" << endl; break;
			case 5 : cout << " Thursday" << endl; break;
			case 6 : cout << " Friday" << endl; break;
			
	    }	
	}
}
    

