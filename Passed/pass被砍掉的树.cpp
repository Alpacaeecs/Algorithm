//校门外的树 
/*输入的第一行有两个整数L（1 <= L <= 10000）和 M
（1 <= M <= 100），L代表马路的长度，M代表区域的数目，L和
M之间用一个空格隔开。接下来的M行每行包含两个不同的整数，
用一个空格隔开，表示一个区域的起始点和终止点的坐标。 */ 
 
//刘鹏 1800012784 
//10.17 
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int i, j, k, p = 0, l, m, from, to;//i,j,k是循环变量； p是被砍的树的数目； l是路程； m是区段数量； from， to是起终点 ； 
	cin >> l >> m;
	int t[10001] = {0};//共有10001棵树木，重置为0 ； 
	for(i = 1; i <= m; i++)//循环所有被砍区段； 
	{
		cin >> from >> to;
		for(j = from - 1; j <= to - 1; j++)
		{
			t[j] = 1;//被砍区段的树都变成1； 
		}
	}
	
	for(k = 0; k <= l; k++)//遍历所有树木查找 ； 
	{
		if (t[k] == 1)
		{
			p ++;//被砍数目加一 ； 
		}
	}
	
	cout << l - p + 1 << endl;//输出剩余树木 
	
	return 0; 
} 
