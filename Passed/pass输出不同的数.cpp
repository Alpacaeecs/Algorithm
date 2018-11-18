/*输出不重复的数字
 输入包含两行： 
第一行包含一个正整数n（1<=n<=20000），表示第二行测试数据的数字的个数； 
第二行包含以空格分隔的n个整数，每个整数大于等于10、小于100。*/
//刘鹏 1800012784
//10.17
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	int n;//n 为数的量； 
	cin >> n;
	int i, j, num;//i、j为循环变量； 
	int cnt = 0, flag;//cnt 为不同的数的数目， flag为指针； 
	int a[20001] = {0};
	for (i = 1; i <= n; i++)//循环输入数据； 
	{
		cin >> num;
		flag = 0;//重置指针； 
		
		for (j = 1; j <= cnt; j++)//在已经有的数中查找； 
		{
			if (a[j] == num)//存在同样的数； 
		    {
			    flag = 1;//指针亮； 
			    break;
		    }
		}
		
		
		if (flag == 0)//没有找到相同的； 
		{
			cnt ++;//数目加一； 
			a[cnt] = num;//存入新数； 
		}
		
	}

	
	for (i = 1; i <= cnt - 1; i++)
	{
		cout << a[i] << " ";//前面的数依次输出； 
	}
	
	cout << a[cnt] << endl;//最后一个； 
	
	return 0; 
} 
