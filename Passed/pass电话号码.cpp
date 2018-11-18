//电话号码 
//1800012784 刘鹏
//10.27
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char dt = '-';//找横杠 
	int i, n;//i为循环变量， n为号码数量 
	cin >> n;
	
	for(i = 1; i <= n; i++)
	{
		int lt = 0;//lt为横杠数目 
		char s[100] = {'a'};//重置字符数组 
		int dot[100] = {0};//dot记录杠号的下标 
		cin >> s;//输入字符串 
		
		for(int j = 0; j < 100; j++)
		{
			if(s[j] == dt)//找杠号 
			{
				lt++;//记录数目和位置 
				dot[lt] = j;
			}
		}
		
		for(int j = 0; j <= strlen(s); j++)//进行映射操作 
		{
			switch(s[j])
			{
				case 'A' :; case 'B' :; case 'C' : s[j] = '2'; break;
				case 'D' :; case 'E' :; case 'F' : s[j] = '3'; break;
				case 'G' :; case 'H' :; case 'I' : s[j] = '4'; break;
				case 'J' :; case 'K' :; case 'L' : s[j] = '5'; break;
				case 'M' :; case 'N' :; case 'O' : s[j] = '6'; break;
				case 'P' :; case 'R' :; case 'S' : s[j] = '7'; break;
				case 'T' :; case 'U' :; case 'V' : s[j] = '8'; break;
				case 'W' :; case 'X' :; case 'Y' : s[j] = '9'; break;
			}
		}
		
		for(int j = lt; j >= 1; j--)//从后往前切掉横杠 
		{
			for(int k = dot[j] + 1; k <= strlen(s); k++)//往前补 
			{
				s[k - 1] = s[k];
			}
		}
		
		cout << s[0] << s[1] << s[2] << "-" << s[3] << s[4] << s[5] << s[6] << endl;//合法输出 
		
	}
	
	return 0;
 } 
