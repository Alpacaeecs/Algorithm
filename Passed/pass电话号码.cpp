//�绰���� 
//1800012784 ����
//10.27
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char dt = '-';//�Һ�� 
	int i, n;//iΪѭ�������� nΪ�������� 
	cin >> n;
	
	for(i = 1; i <= n; i++)
	{
		int lt = 0;//ltΪ�����Ŀ 
		char s[100] = {'a'};//�����ַ����� 
		int dot[100] = {0};//dot��¼�ܺŵ��±� 
		cin >> s;//�����ַ��� 
		
		for(int j = 0; j < 100; j++)
		{
			if(s[j] == dt)//�Ҹܺ� 
			{
				lt++;//��¼��Ŀ��λ�� 
				dot[lt] = j;
			}
		}
		
		for(int j = 0; j <= strlen(s); j++)//����ӳ����� 
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
		
		for(int j = lt; j >= 1; j--)//�Ӻ���ǰ�е���� 
		{
			for(int k = dot[j] + 1; k <= strlen(s); k++)//��ǰ�� 
			{
				s[k - 1] = s[k];
			}
		}
		
		cout << s[0] << s[1] << s[2] << "-" << s[3] << s[4] << s[5] << s[6] << endl;//�Ϸ���� 
		
	}
	
	return 0;
 } 
