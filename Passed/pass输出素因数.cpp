//素因数的输出 
//1800012784 刘鹏 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;

int checkprime (int);//函数 


int main()
{
	int pri, i, left;//left是对某一素因数的最终余数 
	cin >> left;
	
	for (i = 2; i <= left;)//找小于left的因子 
	{
		if (checkprime(i))//遍历所有比left小的素数 
		{
			
			if (left % i == 0)
			{
				do
				{
					left = left / i;
					
				}while (left % i == 0&&left >= i);
				
				
				cout << i << endl;
				
				
				
			}
			else
			{
				i = i + 1;
			}
		 	
		}
		else
		{
			i = i + 1;
		}
		
		
		
		
	}
	
	return 0;
}

int checkprime (int af)//函数在这 
{
	for(int i = 2; i <= sqrt ( af ); i++)
	{
		if ( af % i == 0)
		return 0;
	}
	return 1;
}
