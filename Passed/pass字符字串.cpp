//验证子串
//1800012784 刘鹏
//10.26
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
	char c = ' ';//读入字符，重置为空格 
	string s1, s2;//读入字符串 
	int p = 0, q = 0;//p为s1的长度， q为s2 
	while (c != '\n')
	{
		s1 += c;//拼接 
		c = getchar();
		p++;//计数 
	}
	
	c = ' ';//重置 
	
	while (c != '\n')
	{
		s2 += c;//拼接 
		c = getchar();
		q++;//计数 
	}
	
	int flag = 0;//flag是符合条件的标记 
	
	if(p >= q)//找短的字符串 
	{
		for(int i = 1; i <= p - q + 1; i++)//从大的字符串里面找到起点 
		{
			for(int j = 1; j <= q - 1; j++)//从小的字符串第一个到最后一个和大的对比 
			{
				if(s2[j] == s1[i + j - 1])
				{
					flag ++;//重合的有多少个 
				}
			}
			
			if (flag == q - 1) //全部重合 
			{
				for(int i = 1; i <= q - 1; i++) cout << s2[i];
				
				cout << " is substring of ";
				
				for(int i = 1; i <= p - 1; i++) cout << s1[i];
				
				break;
			}
			else//不全重合要重置flag 
			{
				flag = 0;
			}
		}
	}
	else
	{
		for(int i = 1; i <= q - p + 1; i++)
		{
			for(int j = 1; j <= p - 1; j++)
			{
				if(s1[j] == s2[i + j - 1])
				{
					flag ++;
				}
			}
			
			if (flag == p - 1) 
			{
				for(int i = 1; i <= p - 1; i++) cout << s1[i];
				
				cout << " is substring of ";
				
				for(int i = 1; i <= q - 1; i++) cout << s2[i];
				
				break;
			}
			else
			{
				flag = 0;	
			}
		}
	}
	
	if(flag == 0) cout << "No substring" << endl;//没找到 

	return 0;
} 
