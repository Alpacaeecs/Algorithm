//������� 
//1800012784 ���� 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	double single, average, sum, longest, i, k;//single��ÿ�ڵ�صĵ����� average�Ǿ�ֵ�� sum�������� longest����ĵ�أ� k�ǵ������ 
	while (cin >> k)
	{
	
	sum = 0;//���� 
	longest = 0;

    for (i = 1; i <= k; i ++)
	{
		cin >> single;//���������صĵ��� 
		sum = sum + single;//�õ����� 
	    if (single > longest)//�õ����ֵ 
		    {
		    	longest = single;
			
			}	
	 } 
	 
	 
	 average = sum / 2;
	
	if (longest > average)//�������� 
	{
		cout << fixed << setprecision(1) << sum - longest << endl;
	}
	else//�������� 
	{
		cout << fixed << setprecision(1) << average << endl;
	}
	
    }
	return 0;
} 
	 
	 



