//��ĵ���
//1800012784 ����
//10.26
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
	char c = 'a';//�ַ�����c 
	string s;//�ַ���s 
	int j[1000] = {0}, len, begin;//jΪÿ��������ڵ�λ�ã� lenΪ��������ȣ� beginΪ������� 
	int eff = 0, dot = 0;//effΪ��Ч�ַ��� dotΪ��� 
	
	while(c != '\n')//c���ǻس� 
	{
		s += c;
		c = getchar();
		
		if (c != ' ' && c != '.')
			eff++;//��Ч�ַ� 
		else
	        {
	        	dot++;//��� 
	        	j[dot] = eff + dot;//���±��λ�� 
		}
		
	}
	
	len = 0;
	
	for(int i = 1; i <= dot; i++)
	{
		if(j[i] - j[i - 1] > len)//���ʱ�����ȳ� 
		{
			begin = j[i - 1];//������� 
			len = j[i] - j[i - 1];//���ȼ��� 
		}
	}
	for(int i = begin + 1; i < begin + len; i++)//�������� 
	{
		cout << s[i];
	}
	
	return 0; 
} 
