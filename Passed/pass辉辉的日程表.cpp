/*�ԻԵ��ճ̱� �� 1 ��Ϊ 1 ������ n����ʾ�յ� n ��ԤԼ��n �� 10�� 
֮���� n ��ԤԼ����ÿ�а��� 2 ������ t1 �� t2 ���ֱ��ʾÿ��ԤԼ
�Ŀ�ʼʱ�̺ͽ���ʱ�̣���ȷ��Сʱ������ 10 ��ʾ 10 �㣩��
9 �� t1 < t2 �� 21��ԤԼ�����յ����Ⱥ�˳�����С�*/
// ���� 1800012784
// 10.17
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int n, i, j, from, to, sum;//n ΪԤԼ���� i��jΪѭ�������� from��toΪ��ֹʱ�̣� sumΪ����ԼСʱ����Ŀ�� 
	cin >> n;
	int t[25] = {0};//����24СʱΪ0�� 
	for (i = 1; i <= n; i++)
	{
		sum = 0;//������Լ����ʱ��Ϊ0�� 
		cin >> from >> to;
		
		for (j = from; j <= to - 1; j++)//���ҽ�ҪԼ����ʱ�Σ� 
		{
			sum = sum + t[j];//���е�Լ��Сʱ 
		}
		
		if(sum == 0)//û��Сʱ��ռȥ 
		{
			for (j = from; j <= to - 1; j++)
		    {
		    	t[j] = 1;//��ЩСʱ��Ϊ1����ʾ�Ѿ���Լ�� 
			}
			cout << "Y" << endl;//���Y 
		}
		
		else
		{
			cout << "N" << endl;//�������N 
		}
	}
	
	return 0; 
 
} 
