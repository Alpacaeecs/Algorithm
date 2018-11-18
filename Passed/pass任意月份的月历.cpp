#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	int i, j, year, sum = 0, month, fird, leap = 0, cnt = 1, md;
	cin >> year >> month;
	
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		leap = 1;
	}
	
	for(i = 1900; i < year; i++)
	{
		sum += 365 + (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0));
		
	}
	
	if (leap == 1)
	{
	
		for(i = 1; i < month; i++)
		{
			switch(i)
			{
				case 2: j = 29; break;
				case 4:; case 6:; case 9:; case 11: j = 30; break;
				default: j = 31; break;
			}
			
			sum += j;
		} 
		
		switch(month)
			{
				case 2: md = 29; break;
				case 4:; case 6:; case 9:; case 11: md = 30; break;
				default: md = 31; break;
			}
    }
    else
    {
    	for(i = 1; i < month; i++)
		{
			switch(i)
			{
				case 2: j = 28; break;
				case 4:; case 6:; case 9:; case 11: j = 30; break;
				default: j = 31; break;
			}
			
			sum += j;
	    }
	    
	    switch(month)
			{
				case 2: md = 28; break;
				case 4:; case 6:; case 9:; case 11: md = 30; break;
				default: md = 31; break;
			}
    }
	
	i = sum % 7;
	
	switch (i)
	{
		case 1: fird = 3; break;
		case 2: fird = 4; break;
		case 3: fird = 5; break;
		case 4: fird = 6; break;
		case 5: fird = 7; break;
		case 6: fird = 1; break;
		default: fird = 2; break;
	}
	
	
	cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
	
	for (i = 1; i <= fird - 1; i++)
	{
		cout << "    " ; 
	}
	for (i = fird; i <= 7; i++)
	{
		cout << "   " << cnt;
		cnt ++;
	}
	cout << endl;
	for (i = 8; i <= 14; i++)
	{
	    cout << setw(4) << setfill(' ') << cnt;
	    cnt ++;
	}
	cout << endl;
	for (i = 15; i <= 21; i++)
	{
	    cout << setw(4) << setfill(' ') << cnt;
	    cnt ++;
	}
	cout << endl;
	for (i = 22; i <= 28; i++)
	{
	    cout << setw(4) << setfill(' ') << cnt;
	    cnt ++;
	}
	cout << endl;
	for (i = 29; cnt <= md; i++)
	{
		cout << setw(4) << setfill(' ') << cnt;
	    cnt ++; 
	}
	cout << endl;
}
