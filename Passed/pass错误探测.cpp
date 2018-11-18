//错误探测
//1800012784 刘鹏
//10.26
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n;//n为矩阵阶数 
	while(cin >> n)
	{
		if (n == 0)
		{
			break;//读入零时结束 
		}
		
		int i, j, a[105][105] = {{0}};//i， j为行和列； 矩阵 
		
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				cin >> a[i][j];//读入矩阵 
			}
		}
		
		int sumi[105] = {0}, sumj[105] = {0}; //sumi表示行中的奇数数目； sumj表示列中的奇数数目 
		int flag1 = 0, flag2 = 0;//flag1、2表示行列的满足情况 
		int flagi[100], flagj[100];//存奇数的行和列 
		
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				sumi[i] += a[i][j];//求某行元素的和 
			}
			
			if(sumi[i] % 2 != 0)//这行是奇数 
			{
				flag1++;//奇数行多一个 
				flagi[flag1] = i;//存下这一行的号码 
			}
			
		}
		
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= n; i++)
			{
				sumj[j] += a[i][j];//求某列元素的和 
			}
			
			if(sumj[j] % 2 != 0)//这列是奇数 
			{
				flag2++;//奇数列多一个 
				flagj[flag2] = j;//存号码 
			}
		}
		
		if (flag1 == 0 && flag2 == 0)//没有奇数行和列 
	                cout << "OK" << endl;
		else
		{
			if (flag1 == 1 && flag2 == 1)//恰好有一行和一列是奇数，那么改变交叉点元素，就能同时改变奇偶性 
			{
			       cout << "Change bit (" << flagi[1] << "," << flagj[1] << ")" << endl;//输出存下来的这一行和这一列的号码
			        
			}
			else
			{
				cout << "Corrupt" << endl;
			}
			
			
		} 
	}
	
	return 0;
} 
