//生理周期 
//1800012784 刘鹏 
// 10.13 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int set, k, p, fp, e, fe, i, fi, d, ip, ie, ii, exa, flag = 0, num = 0;
	while(cin >> p >> e >> i >> d)
	{
		if(p == -1)
		{
			break;
		}
		
		
		flag = 0;
		for (ip = 1; ip * 23 + p < d; ip ++)
		{}
		for (ie = 1; ie * 28 + e < d; ie ++)
		{}
		for (ii = 1; ii * 33 + i < d; ii ++)
		{}
		
		fp = ip * 23 + p;
		fe = ie * 28 + e;
		fi = ii * 33 + i;
		
		
		
		for(exa = fi + 1; flag == 0; exa ++)
		{
			k = ((exa - fp) % 23 == 0) + ((exa - fe) % 28 == 0) + ((exa - fi) % 33 == 0);
			
			if (k == 3)
			{
		     
			   flag = 1;
		    }
		}
		
		num += 1;
		
		if (exa - d - 1 > 21252)
		{
			set = exa - d - 1 - 21252;
		}
	   	else
	   	{
	   	    set = exa - d - 1;
	   		
		}
	   	
	   	
		
		cout << "Case " << num << ": the next triple peak occurs in "  << set << " days." << endl; 
		
	   	
   }
   
   return 0;
} 

