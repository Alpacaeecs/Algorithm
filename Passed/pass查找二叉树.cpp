//有理数
//1800012784 刘鹏
//11.18 
#include <iostream>
#include <math.h>
using namespace std;

int det[5000] = {0};//记录每一步的数组
 
int upp(int ov, int ed, int row)//向上查找 
{
	if(ov == ed) return row;
	
	else
	{
		if(ov > ed) det[row] = 1, upp(ov - ed, ed, row + 1);//右侧上去 
	        else det[row] = 2, upp(ov, ed - ov, row + 1);//左侧上去 
	}
}

int main()
{
	int l, n;
	cin >> n;
	for(l = 1; l <= n; l++)
	{
		int iniov, inied, line, col, iniline;
		cin >> iniov >> inied;//输入初始的分子， 分母 
		
		line = upp(iniov, inied, 0);//查找上方的行数 
		
		iniline = pow(2, line) - 1;//上方的数目 
		
		int w = 1;
		for(int k = line - 1; k >= 0; k--)//计算所在列的序号 
		{
			if(det[k] == 1) w = w * 2;
			else w = w * 2 - 1;
		}
		
		
	
		cout << iniline + w << endl;
	}
	
	return 0; 
}
