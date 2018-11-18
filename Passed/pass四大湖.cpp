//四大湖 
//1800012784 刘鹏 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int dong, bo, tai, hong, a, b, c, d;
	for (dong = 1; dong <= 4; dong++)
	{
		for (bo = 1; bo <= 4; bo++)
		{
			if (bo == dong)
			{
				continue;
			}
			else
			{
				for (tai = 1; tai <= 4; tai++)
				{
					if(bo == tai||tai == dong)
					{
						continue;
					}
					else
					{
						for (hong = 1; hong <= 4; hong++)
						{
							if(hong == dong||hong == tai||hong == bo)
							{
								continue;
							}
							else//遍历所有情况输入 
							{
								
								a = (dong == 1) + (bo == 3) + (hong == 4);
								b = (hong == 1) + (dong == 4) + (bo == 2) + (tai == 3);
								c = (hong == 4) + (dong == 3);
								d = (bo == 1) + (tai == 4) + (hong == 2) + (dong == 3);
								if ((a == 1)&&(b == 1)&&(c == 1)&&(d == 1))//判断 
								{
									cout << bo << endl;
									cout << dong << endl;
									cout << tai << endl;
									cout << hong << endl;
								}
						
							}
						}
					}
				}
			}
		}
	}
	return 0;
}//这个题目缩进太多，我觉得贴到编程网格之后可能列数不够就缩进了，无奈.jpg 
