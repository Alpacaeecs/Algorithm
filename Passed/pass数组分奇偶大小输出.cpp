/*����10���������˴��Կո�ָ������������Ժ����(Ҳ���ո�ָ�)��Ҫ��: 
1����������е�����,�����Ӵ�С���У� 
2��Ȼ��������е�ż��,������С�������С�*/
//���� 1800012784
//10.18
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;
int main ()
{
	int num[11] = {0}, odd[11] = {0}, even[11] = {0};//num�����������飻 odd�������飻 even��ż���飻 
	int i, j, oddn = 0, evenn = 0;//i��j��ѭ��������oddn��evenn������ż������ 
	
	for (i = 1; i <= 10; i++)
	{
		cin >> num[i];//�������� 
	}
	
	sort (num, num + 11);//С�����ź� 
	
	for (i = 1; i <= 10; i++)
	{
		if (num[i] % 2 == 0)
		{
			evenn ++;
			even[evenn] = num[i];//����ż���� 
		}
		else
		{
			oddn ++;
			odd[oddn] = num[i];//���������� 
		}
	}
	
	for (i = 1; i <= oddn; i++)
	{
		for (j = 1; j < oddn; j++)
		{
			if(odd[j] < odd[j + 1])
			{
				swap (odd[j], odd[j + 1]);//ð�ݷ��ź������� 
			}
		}
	}
	
	for (i = 1; i <= oddn; i ++)
	{
		cout << odd[i] << " ";//��������� 
	}
	
	for (i = 1; i < evenn; i++)
	{
		cout << even[i] << " ";//���ż���� 
	}
	
	cout << even[evenn];//���һ���� 
	
	return 0;
}
