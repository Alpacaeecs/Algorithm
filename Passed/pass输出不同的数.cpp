/*������ظ�������
 ����������У� 
��һ�а���һ��������n��1<=n<=20000������ʾ�ڶ��в������ݵ����ֵĸ����� 
�ڶ��а����Կո�ָ���n��������ÿ���������ڵ���10��С��100��*/
//���� 1800012784
//10.17
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	int n;//n Ϊ�������� 
	cin >> n;
	int i, j, num;//i��jΪѭ�������� 
	int cnt = 0, flag;//cnt Ϊ��ͬ��������Ŀ�� flagΪָ�룻 
	int a[20001] = {0};
	for (i = 1; i <= n; i++)//ѭ���������ݣ� 
	{
		cin >> num;
		flag = 0;//����ָ�룻 
		
		for (j = 1; j <= cnt; j++)//���Ѿ��е����в��ң� 
		{
			if (a[j] == num)//����ͬ�������� 
		    {
			    flag = 1;//ָ������ 
			    break;
		    }
		}
		
		
		if (flag == 0)//û���ҵ���ͬ�ģ� 
		{
			cnt ++;//��Ŀ��һ�� 
			a[cnt] = num;//���������� 
		}
		
	}

	
	for (i = 1; i <= cnt - 1; i++)
	{
		cout << a[i] << " ";//ǰ�������������� 
	}
	
	cout << a[cnt] << endl;//���һ���� 
	
	return 0; 
} 
