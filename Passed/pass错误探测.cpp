//����̽��
//1800012784 ����
//10.26
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n;//nΪ������� 
	while(cin >> n)
	{
		if (n == 0)
		{
			break;//������ʱ���� 
		}
		
		int i, j, a[105][105] = {{0}};//i�� jΪ�к��У� ���� 
		
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				cin >> a[i][j];//������� 
			}
		}
		
		int sumi[105] = {0}, sumj[105] = {0}; //sumi��ʾ���е�������Ŀ�� sumj��ʾ���е�������Ŀ 
		int flag1 = 0, flag2 = 0;//flag1��2��ʾ���е�������� 
		int flagi[100], flagj[100];//���������к��� 
		
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				sumi[i] += a[i][j];//��ĳ��Ԫ�صĺ� 
			}
			
			if(sumi[i] % 2 != 0)//���������� 
			{
				flag1++;//�����ж�һ�� 
				flagi[flag1] = i;//������һ�еĺ��� 
			}
			
		}
		
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= n; i++)
			{
				sumj[j] += a[i][j];//��ĳ��Ԫ�صĺ� 
			}
			
			if(sumj[j] % 2 != 0)//���������� 
			{
				flag2++;//�����ж�һ�� 
				flagj[flag2] = j;//����� 
			}
		}
		
		if (flag1 == 0 && flag2 == 0)//û�������к��� 
	                cout << "OK" << endl;
		else
		{
			if (flag1 == 1 && flag2 == 1)//ǡ����һ�к�һ������������ô�ı佻���Ԫ�أ�����ͬʱ�ı���ż�� 
			{
			       cout << "Change bit (" << flagi[1] << "," << flagj[1] << ")" << endl;//�������������һ�к���һ�еĺ���
			        
			}
			else
			{
				cout << "Corrupt" << endl;
			}
			
			
		} 
	}
	
	return 0;
} 
