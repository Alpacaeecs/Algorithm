//矩阵的变换
//1800012784 刘鹏 
//10.26 
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n, i, j;//n为矩阵的阶数， i， j为行和列的循环变量 
	int flag = 0;//标记 
	char a[15][15], b[15][15];//字符矩阵 
	
	cin >> n;//输入阶数 
	
	if (n == 1)//一阶的暴力规定为4 
	{    
	    cout << "4" << endl;
	    flag = 1;
    }
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			cin >> a[i][j];//读入矩阵a 
		}
	}
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			cin >> b[i][j];//读入b 
		}
	}
	
	
	int i1, j1, i2, j2, sum = 0;//i1， j1为第一个矩阵的行列， 2同理 ；sum为判断变量 
	
	
	
	
	for (i1 = 1; i1 <= n; i1++)
	{
		for (j1 = 1; j1 <= n; j1++)
		{
			i2 = j1;
			j2 = n + 1 - i1;//顺时针变法 
			
			if(a[i1][j1] == b[i2][j2])
			{
				sum++;//找有多少个相同的 
			}
		}
	}
	
	if (sum == n * n && flag == 0)//如果全部相同，且没找到其他的变法 
	{
	    cout << "1" << endl;//输出1 
	    flag = 1;//已找到 
    }
	
	sum = 0;
	
	
	
	
	
	for (i1 = 1; i1 <= n; i1++)
	{
		for (j1 = 1; j1 <= n; j1++)
		{
			i2 = n + 1 - j1;
			j2 = i1;//逆时针 
			
			if(a[i1][j1] == b[i2][j2])
			{
				sum++;
			}
		}
	}
	
	if (sum == n * n && flag == 0)
	{
	    cout << "2" << endl;
	    flag = 1;//找到 
    }
    
    sum = 0;
	
	
	
	
	
	
	for (i1 = 1; i1 <= n; i1++)
	{
		for (j1 = 1; j1 <= n; j1++)
		{
			i2 = n + 1 - i1;
			j2 = n + 1 - j1;//对称 
			
			if(a[i1][j1] == b[i2][j2])
			{
				sum++;
			}
		}
	}
	
	if (sum == n * n && flag == 0)
	{
	    cout << "3" << endl;
	    flag = 1;//找到 
    }
    
    sum = 0;
	
	
	
	
	
	for (i1 = 1; i1 <= n; i1++)
	{
		for (j1 = 1; j1 <= n; j1++)
		{
			i2 = i1;
			j2 = j1;
			
			if(a[i1][j1] == b[i2][j2])
			{
				sum++;
			}
		}
	}
	
	if (sum == n * n && flag == 0)
	{
	    cout << "4" << endl; 
	    flag = 1;//找到 
    }
    
    
	
	
	if (flag == 0)//其他变化 
        cout << "5" << endl;
		
		
	return 0; 
}
