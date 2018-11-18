//计算鞍点
//1800012784 刘鹏
//10.25
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	int mat[6][6] = {{0}}, i, j, sum1, sum2, k, m, flag = 0;//mat是矩阵； i， j是行和列； sum1， sum2是判断列最小和行最大的； k，m是循环变量； 
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			cin >> mat[i][j];//读入矩阵 
		}
	}
	
	for (i = 1; i <= 5; i++)
	{    
		for (j = 1; j <= 5; j++)
		{
			sum1 = 0;//重置条件 
			sum2 = 0;
			for(k = 1; k <= 5; k++)
			{
				sum1 += (mat[i][j] >= mat[i][k]);//满足条件 sum1 ++； 
			}
			for(m = 1; m <= 5; m++)
			{
				sum2 += (mat[i][j] <= mat[m][j]);//满足条件 sum2 ++； 
			}
			
			if(sum1 == 5 && sum2 == 5)//行列都满足 
			{
				cout << i << " " << j << " " << mat[i][j] << endl;
				flag ++;//输出 
			}
			
		}
	}
	
	if(flag == 0)
	    cout << "not found" << endl;//not found
		
	return 0; 
} 
