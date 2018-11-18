/*打印极值点下标
在一个整数数组上，对于下标为i的整数，如果它大于所有它相邻
的整数，或者小于所有它相邻的整数，则称为该整数为一个极值
点，极值点的下标就是i。
有2×n+1行输入：第一行是要处理的数组的个数n，
n<1000；对其余2×n行，第一行是此数组的元素个数k(4<k<80)，
第二行是k个整数，每两个整数之间用空格分隔。
 */
//刘鹏 1800012784
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
