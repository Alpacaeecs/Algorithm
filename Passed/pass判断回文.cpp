//�жϻ������� 
//1800012784 ����
//10.26
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char c = ' ';//cΪÿ�δ�����ַ�������Ϊ�ո� 
	string s;//�ַ��� 
	int l = 0, max, min = 0;//l����ַ����ȣ� max�� minΪ��Ӧλ�� 
	while( c != '\n')//û�������� 
	{       
	        c = getchar();//���� 
		s += c;//���ڴ��ĺ��� 
	        l++;//��һ���ַ� 
	        
	}
	
	max = l - 2;//����/n���õ�һλ����±�Ϊ�㣬�ʼ��� 
	int flag = 0;//��� 
	
	while (max > min)
	{
		if(s[min] != s[max])
		{
			flag++;//��Ӧλ���ַ���ͬ 
		}
		
		max--;//��һ�� 
		min++;
	}
	
	if(flag == 0)
	{
		cout << "yes" << endl;//�ǻ��� 
	}
	else
	{
		cout << "no" << endl;
	}
	
	return 0; 
} 
