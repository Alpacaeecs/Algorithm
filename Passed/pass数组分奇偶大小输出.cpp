/*输入10个整数，彼此以空格分隔，重新排序以后输出(也按空格分隔)，要求: 
1）先输出其中的奇数,并按从大到小排列； 
2）然后输出其中的偶数,并按从小到大排列。*/
//刘鹏 1800012784
//10.18
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;
int main ()
{
	int num[11] = {0}, odd[11] = {0}, even[11] = {0};//num是输入数数组； odd是奇数组； even是偶数组； 
	int i, j, oddn = 0, evenn = 0;//i、j是循环变量；oddn，evenn是奇数偶数个数 
	
	for (i = 1; i <= 10; i++)
	{
		cin >> num[i];//读入数组 
	}
	
	sort (num, num + 11);//小到大排好 
	
	for (i = 1; i <= 10; i++)
	{
		if (num[i] % 2 == 0)
		{
			evenn ++;
			even[evenn] = num[i];//读入偶数组 
		}
		else
		{
			oddn ++;
			odd[oddn] = num[i];//读入奇数组 
		}
	}
	
	for (i = 1; i <= oddn; i++)
	{
		for (j = 1; j < oddn; j++)
		{
			if(odd[j] < odd[j + 1])
			{
				swap (odd[j], odd[j + 1]);//冒泡法排好奇数组 
			}
		}
	}
	
	for (i = 1; i <= oddn; i ++)
	{
		cout << odd[i] << " ";//输出奇数组 
	}
	
	for (i = 1; i < evenn; i++)
	{
		cout << even[i] << " ";//输出偶数组 
	}
	
	cout << even[evenn];//最后一个数 
	
	return 0;
}
