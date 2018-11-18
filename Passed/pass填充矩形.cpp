//画出矩形 
//1800012784 刘鹏 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int line, row, blank, i;//行数line，列数row，填充blank，循环i 
	char fill;//填充字符fill 
	while (cin >> line)//输入line开始 
	{   
	
	    if(line == 0)
	        break;//如果输入0就要结束 
	    else
	    {
	        cin >> row >> fill >> blank;//继续输入 
	        for(i = 1; i <= line; i++)
			{
		        if (i == 1 || i == line)
		        {
			        cout << setw(row) << setfill(fill) << fill << endl;//首尾两行 
		        }
		        else
		        {
			        if (blank == 1)
			        {
				        cout << setw(row) << setfill(fill) << fill << endl;//填满 
		        	}
			        else
			        {
				        cout << fill << setw(row - 1) << setfill(' ') << fill << endl;//不填满 
			        }
			    
		    
		        }
		       
	        }
		}
    }
    
    
    return 0;

}
