//牛顿迭代法 
//1800012784 刘鹏 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	double num, x;//输入数num，迭代根x 
	int i, f;//迭代次数i，指针f 
	while(cin >> num)
	{
		f = 0;//重置指针 
		x = 1.0;//充值初始值 
		for(i = 1; f == 0; i++)//循环迭代 
		{
		    
			if(x * x - num == 0)//误差判断 (这个地方很bug，初值是特定的1.0，输入1的话出来就是2了） 
		    {
			    cout << i  << " ";
			    f = 1;//指针 
			    cout << fixed << setprecision(2) << x << endl;//输出 
		    }
	
			
			
			x = x - (x * x - num) / (2.0 * x);
	        
			
			
		    if(x * x - num < 1e-6 && f == 0)//误差判断 
		    {
			    cout << i + 1 << " ";
			    f = 1;//指针 
			    cout << fixed << setprecision(2) << x << endl;//输出 
		    }
		    
	    }
		
	
	}
    return 0; 
}
