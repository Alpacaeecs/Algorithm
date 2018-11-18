/*辉辉的日程表 第 1 行为 1 个整数 n，表示收到 n 份预约，n ≤ 10。 
之后有 n 行预约请求，每行包含 2 个整数 t1 和 t2 ，分别表示每份预约
的开始时刻和结束时刻（精确到小时，例如 10 表示 10 点），
9 ≤ t1 < t2 ≤ 21。预约请求按收到的先后顺序排列。*/
// 刘鹏 1800012784
// 10.17
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int n, i, j, from, to, sum;//n 为预约量； i、j为循环变量； from、to为起止时刻； sum为有已约小时的数目； 
	cin >> n;
	int t[25] = {0};//重置24小时为0； 
	for (i = 1; i <= n; i++)
	{
		sum = 0;//重置有约定的时刻为0； 
		cin >> from >> to;
		
		for (j = from; j <= to - 1; j++)//查找将要约定的时段； 
		{
			sum = sum + t[j];//已有的约定小时 
		}
		
		if(sum == 0)//没有小时被占去 
		{
			for (j = from; j <= to - 1; j++)
		    {
		    	t[j] = 1;//这些小时记为1，表示已经被约； 
			}
			cout << "Y" << endl;//输出Y 
		}
		
		else
		{
			cout << "N" << endl;//否则输出N 
		}
	}
	
	return 0; 
 
} 
