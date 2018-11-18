//Âò±ù°ô 
//1800012784 ÁõÅô 
// 10.10 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int i, k, a, b, c, d, e, n1, n2, n3, n4, n5, flag = 0, sum;
	cin >> k >> n1 >> n2 >> n3 >> n4 >> n5;
	for (i = 1; i <= k * 100 && flag == 0;i ++)
	{
		for (a = 1; a <= i / n1; a ++)
		{
			b = i - n1 * a;
			c = i - n2 * b;
			d = i - n3 * c;
			e = i - n4 * d;
			
			if (n5 * e + a == i && a != b && b != c && c!= d && d != e)
			{
				flag = 1;
				printf("%d %d %d %d %d %d", i, a, b, c, d, e);
			}
		}
		
	}
	
	if (flag == 0)
	{
		cout << "not found" << endl;
	}
} 

