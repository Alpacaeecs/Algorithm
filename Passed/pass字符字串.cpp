//��֤�Ӵ�
//1800012784 ����
//10.26
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
	char c = ' ';//�����ַ�������Ϊ�ո� 
	string s1, s2;//�����ַ��� 
	int p = 0, q = 0;//pΪs1�ĳ��ȣ� qΪs2 
	while (c != '\n')
	{
		s1 += c;//ƴ�� 
		c = getchar();
		p++;//���� 
	}
	
	c = ' ';//���� 
	
	while (c != '\n')
	{
		s2 += c;//ƴ�� 
		c = getchar();
		q++;//���� 
	}
	
	int flag = 0;//flag�Ƿ��������ı�� 
	
	if(p >= q)//�Ҷ̵��ַ��� 
	{
		for(int i = 1; i <= p - q + 1; i++)//�Ӵ���ַ��������ҵ���� 
		{
			for(int j = 1; j <= q - 1; j++)//��С���ַ�����һ�������һ���ʹ�ĶԱ� 
			{
				if(s2[j] == s1[i + j - 1])
				{
					flag ++;//�غϵ��ж��ٸ� 
				}
			}
			
			if (flag == q - 1) //ȫ���غ� 
			{
				for(int i = 1; i <= q - 1; i++) cout << s2[i];
				
				cout << " is substring of ";
				
				for(int i = 1; i <= p - 1; i++) cout << s1[i];
				
				break;
			}
			else//��ȫ�غ�Ҫ����flag 
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
	
	if(flag == 0) cout << "No substring" << endl;//û�ҵ� 

	return 0;
} 
