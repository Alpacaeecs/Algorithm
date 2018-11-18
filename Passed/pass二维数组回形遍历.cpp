//二维数组回形遍历 
//1800012784 刘 鹏 
//10.25
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main ()
{
	
	int col, row, i, j;//col为列数， row为行数， i， j为行和列；  
	while (cin >> row >> col) 
	{
		int tmp=0;//已经读出的数目 
		int arr[105][105]={{0}};
		
		for(i = 1; i <= row; i++)
		{
			for(j = 1; j <= col; j++)
			{
				cin >> arr[i][j];//读入矩阵 
			}
		}
		
		int cutrow = 0,cutcol = 0;//去除的行和列 
		
		while(row >= 1 + 2 * cutrow && col >= 1 + 2 * cutcol)//判据是左边列没有超过右边 ，行类似 
		{
			
			for(i = 1 + cutcol; i <= col - cutcol; i++)//第一行读取 
			{
				cout << arr[cutrow + 1][i] << endl;
				tmp++;
				if(tmp == row * col) break;//读完了break 
			}
			
			if(tmp == row * col) break;//读完了break 
			
			for(i = cutrow + 2; i <= row - cutrow; i++)//最后一列 
			{
				cout << arr[i][col - cutcol] << endl;
				tmp++;
				if(tmp == row * col) break;
			}
			
			if(tmp == row * col) break;
			
			for(i = col - cutcol - 1; i >= 1 + cutcol; i--)//最后一行 
			{
				cout << arr[row - cutrow][i] << endl;
				tmp++;
				if(tmp == row * col) break;
			}
			
			if(tmp == row * col) break;
			
			for(i = row - cutrow - 1; i >= 2 + cutrow; i--)//第一列 
			{
				cout << arr[i][1 + cutcol] << endl;
				tmp++;
				if(tmp == row * col) break;
				
			}
			
			if(tmp == row * col) break;
			
			cutcol++;//去掉的列和行++ 
			cutrow++;
		}
    }
    
    return 0; 
} 
