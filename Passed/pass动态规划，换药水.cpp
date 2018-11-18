//∂ØÃ¨πÊªÆ
//1800012784 ¡ı≈Ù
//10.28
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

bool usable(double i, double j)
{
	if(i < j) return false;
	else return true;
}
int main()
{
	double con[120];
	int max = 1;
	int f[120];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> con[i];
	}
	
	f[1] = 1;
	int flag = 0;
	
	for (int i = 2; i <= n; i++)
	{
		for(int j = 1; j < i; j++)
		{
			if(usable(con[j] , con[i]))
			{
				if(f[j] > max)
				{
			 	 	max = f[j];
			 	 
				}	
				
				flag = 1;
				
				f[i] = max + 1;
			}
			
			
		}
		
		max = 1;
		
		if(flag == 0)
		{
			f[i] = 1;
		}
		
		flag = 0;
	}
	
	max = 1;
	
	for(int i = 1; i <= n; i++)
	{
		if(f[i] > max)
		{
			max = f[i];
		}
	}
	
	cout << max;
 } 
 /*
 6
 0.7
 0.9
 0.6
 0.8
 0.8
 0.4*/
