/*��ӡ��ֵ���±�
��һ�����������ϣ������±�Ϊi���������������������������
������������С�����������ڵ����������Ϊ������Ϊһ����ֵ
�㣬��ֵ����±����i��
��2��n+1�����룺��һ����Ҫ���������ĸ���n��
n<1000��������2��n�У���һ���Ǵ������Ԫ�ظ���k(4<k<80)��
�ڶ�����k��������ÿ��������֮���ÿո�ָ���
 */
//���� 1800012784
//10.18
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	
	for (i = 1; i <= n; i++)
	{
		int k, j, s = 0;
		int num[80] = {0};
		
		cin >> k;
		
		for (j = 1; j <= k; j++)
		{
			cin >> num[j];
		}
		
		int spe[40] = {0};
		
		if (num[1] != num[2])
		{
			s = 1;
			spe[1] = 0;
	    }
	    
		for(j = 2; j < k; j++)
		{
			if ((num[j] < num [j + 1] && num[j] < num[j - 1]) || (num[j] > num [j + 1] && num[j] > num[j - 1]))
			{
				s++;
				spe[s] = j - 1;
			}
		}
		
		if (num[k] != num[k - 1])
		    spe[s + 1] = k - 1;
		    
		if (spe[s + 1] != 0)
		{
			for(j = 1; j <= s; j++)
			{
				cout << spe[j] << " ";
			}
			
			cout << spe[s + 1] << endl;
		}
		else
		{
			for(j = 1; j < s; j++)
			{
				cout << spe[j] << " ";
			}
			
			cout << spe[s] << endl;
		}
	}
	
	
	return 0;
	
} 
