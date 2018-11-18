//最长的单词
//1800012784 刘鹏
//10.26
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
	char c = 'a';//字符变量c 
	string s;//字符串s 
	int j[1000] = {0}, len, begin;//j为每个标点所在的位置， len为单词最长长度， begin为单词起点 
	int eff = 0, dot = 0;//eff为有效字符， dot为标点 
	
	while(c != '\n')//c不是回车 
	{
		s += c;
		c = getchar();
		
		if (c != ' ' && c != '.')
			eff++;//有效字符 
		else
	        {
	        	dot++;//标点 
	        	j[dot] = eff + dot;//记下标点位置 
		}
		
	}
	
	len = 0;
	
	for(int i = 1; i <= dot; i++)
	{
		if(j[i] - j[i - 1] > len)//单词比最长长度长 
		{
			begin = j[i - 1];//起点重置 
			len = j[i] - j[i - 1];//长度记下 
		}
	}
	for(int i = begin + 1; i < begin + len; i++)//读出单词 
	{
		cout << s[i];
	}
	
	return 0; 
} 
