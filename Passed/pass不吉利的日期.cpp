//������������ 
//1800012784 ���� 
// 10.12
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int w, day, weekday, month, i, k;//w������ĵ�һ�����������day����һ���ĳ����13�յĲ�࣬month�������£�iѭ��������k�������13rd�������� 
	cin >> w;
	for(month = 1; month <= 12; month++)
	{
		day = 0;//���� 
		
		for(i = 1; i < month; i++)//�������֮ǰ�������·ݵ������� 
		{
			switch(i)
			{
				case 2 : day += 28; break;
				case 1 : ; case 3 : ; case 5 : ; case 7 : ; case 8 : ; case 10 : day += 31; break;
				default : day += 30; break;
			}
			
		}
	
	    day += 12; 
		weekday = day % 7;
		k = (w + weekday) % 7;//�������������� 
		
		if (k == 5)//����Ͳ������� 
		{
		    cout << month << endl;
		}
		
	}
	
	return 0;

} 

