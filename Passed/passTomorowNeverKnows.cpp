//Tomorrow never knows?
//1800012784 ���� 
// 10.12
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int y, m, d, i = 0, slip, tom, leap, month;// y, m, d����������ڣ� i���ǲ���12-31�ı�ǣ� leap������ı�ǣ� tom�ǵڶ�������ڣ� slip��Խ������µ���һ���£� month��ÿ�µ�����  
	scanf ("%d-%d-%d", &y, &m, &d);
	
	if ((m == 12)&&(d == 31))
	{
		i = 1;//�����ʮ������ʮһ�գ������������ 
		cout << y + 1 << "-01-01";
		
	}
	
	if (((y % 400 == 0)||((y % 4 == 0)&&(y % 100 != 0)))&&(i == 0))
	{
		leap = 1;//�����Ҳ���һ��ĩβ 
	}
	else
	{
		leap = 0;//�������� 
	}
	
	if ((leap ==  1)&&(i == 0))//������ 
	{
		switch(m)
		{
			case 2 : month = 29; break;
			case 4 :; case 6 :; case 9 :; case 11 : month = 30; break;
			default : month = 31; break;
		}
		
		if ( d + 1 <= month)//�ڶ���û�е���һ���� 
		{
			tom = d + 1;
			printf ("%d-%02d-%02d", y, m, tom);
		}
		else//�ڶ��쵽��һ���� 
		{
			slip = m + 1;
			tom = 1;
			printf ("%d-%02d-%02d", y, slip, tom);
		}
	}
	
	if ((leap ==  0)&&(i == 0))//�������꣬��ͬ 
	{
		switch(m)
		{
			case 2 : month = 28; break;
			case 4 :; case 6 :; case 9 :; case 11 : month = 30; break;
			default : month = 31; break;
		}
		
		if ( d + 1 <= month)
		{
			tom = d + 1;
			printf ("%d-%02d-%02d", y, m, tom);
		}
		else
		{
			slip = m + 1;
			tom = 1;
			printf ("%d-%02d-%02d", y, slip, tom);
		}
	}
	
	
    return 0 ;	
} 

