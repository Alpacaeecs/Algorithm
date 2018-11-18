//寻找山顶
//1800012784 刘鹏
//10.25
/*这道题的二维数组的零行和零列应该空出来，这是我平时的习惯，但在这道题里面，第一行和第一列的高程如果不空出0行和0列就无法简便判断*/ 
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct coor//结构体坐标 
{
	int x;
	int y;
};

bool cmp(coor i, coor j)//排序方式先比x坐标再比y坐标 
{
	return (i.x < j.x) || ((i.x == j.x) && (i.y < j.y));
}

int main ()
{
	int i, j, mat[25][25] = {{0}}, p, q;//i，j是行和列，mat是矩阵，p，q是循环变量 
	cin >> i >> j;
	for(p = 1; p <= i; p++)
	{
		for(q = 1; q <= j; q++)
		{
			cin >> mat[p][q];//读入矩阵 
		}
	}
	
	coor c[100];//定义100个坐标 
	int sum, peak = 0;//sum是判断变量， peak是山峰数目 
	
	for(p = 1; p <= i; p++)
	{
		for(q = 1; q <= j; q++)
		{
			sum = (mat[p][q] >= mat[p - 1][q]) + (mat[p][q] >= mat[p + 1][q]) + (mat[p][q] >= mat[p][q + 1]) + (mat[p][q] >= mat[p][q - 1]);//比周围四个都不矮 
			if (sum == 4)
			{
				peak ++;//找到山峰 
				c[peak].x = p - 1;//读入x坐标 
				c[peak].y = q - 1;//读入y坐标 
			}
		}
	}
	
	sort(c + 1, c + peak + 1, cmp);//排序 
	
	for(i = 1; i <= peak; i++)
	{
		cout << c[i].x << " " << c[i].y << endl;//读出坐标 
	}
	
	return 0;
 } 
