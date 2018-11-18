// 验证哥德巴赫猜想 
//1800012784 刘鹏
//10.6 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int checkprime ( int );//不好意思我自己写了个函数，之后就没什么可说的了 

int main()
{
	int a, n, m, b;
    cin >> m;
    n = m;
	
	for ( a = 2 ; a <= (n / 2) ; a++ )
	{
		if (checkprime ( a ))//用就完事了 
		{
			b = m - a;
			
			if (checkprime ( b ))
			{
				cout << a << " " << b << endl;
			}
			
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

