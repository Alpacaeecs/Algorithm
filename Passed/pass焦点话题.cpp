//焦点话题 
//1800012784 刘鹏 
//10.26 
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int g[105][105] = {{0}}, sum[105] = {0};//g【i】【j】是i同学提及j的次数； sum【j】是j被提及的总次数； 
	int n, i, j;//n是微博数； i， j 是循环变量 
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		int name, cnt, peo;//name是发文者， cnt是提及的人数， peo是被提及的号码 
		cin >> name >> cnt;
		for (j = 1; j <= cnt; j++)
		{
			cin >> peo;
			g[name][peo] ++;//读入矩阵 
	    }
	     
	    
	}
	
	for (j = 1; j < 105; j++)
	{
		for (i = 1; i < 105; i++)
		{
			sum[j] += g[i][j];//计算每个人被提及的次数 
		}
	}
	
	int max = sum[1], maxno = 1;//max最多被提及几次， maxno是此人的编号 
	for (j = 1; j < 105; j++)
	{
		if(sum[j] > max)
		{
			max = sum[j];
			maxno = j;//找到编号和次数 
		}
	}
	
	cout << maxno << endl;//输出编号 
	
	int cnti = 0;//cnti表示找到最后一个提及他的人 
	
	for (i = 1; i < 105; i++)
	{
	
		if(g[i][maxno] != 0)
		{
			cnti = i;//找最后提及他的人的编号 
		}
	}
	
	
	for(i = 1; i < cnti; i++)
	{
		if(g[i][maxno] != 0)
		{
			cout << i << " " ;//输出不是最后提及他的人的编号加空格 
		}
	}
	
	cout << cnti;//输出最后提及她的人的编号
	
	return 0; 
} 
