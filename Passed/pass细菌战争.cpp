//验证极限 
//1800012784 刘鹏 
// 10.5 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int bad, well;
	int h, k, f, flag = 0;
	cin >> k;
	for (f = 1; f <= k; f++)
	{
		cin >> bad >> well;
		for (h = 1; flag == 0; h++)
		{
			bad = bad - well;
			bad = bad * 2;
			well = well * 1.05;
			if (bad >= 1000000)
			{
				bad = 1000000;
			}
			
			if (bad <= 0)
			{
				flag = 1;
				cout << h  << endl;
			}
			
		}
		
		flag = 0;
    }
    return 0;

}



