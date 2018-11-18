//判断回文序列 
//1800012784 刘鹏
//10.26
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char c = ' ';//c为每次打入的字符，重置为空格 
	string s;//字符串 
	int l = 0, max, min = 0;//l标记字符长度， max， min为对应位数 
	while( c != '\n')//没遇到换行 
	{       
	        c = getchar();//读入 
		s += c;//补在串的后面 
	        l++;//多一个字符 
	        
	}
	
	max = l - 2;//剪掉/n和让第一位变成下标为零，故减二 
	int flag = 0;//标记 
	
	while (max > min)
	{
		if(s[min] != s[max])
		{
			flag++;//对应位数字符不同 
		}
		
		max--;//下一对 
		min++;
	}
	
	if(flag == 0)
	{
		cout << "yes" << endl;//是回文 
	}
	else
	{
		cout << "no" << endl;
	}
	
	return 0; 
} 
