//��ά������α��� 
//1800012784 �� �� 
//10.25
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main ()
{
	
	int col, row, i, j;//colΪ������ rowΪ������ i�� jΪ�к��У�  
	while (cin >> row >> col) 
	{
		int tmp=0;//�Ѿ���������Ŀ 
		int arr[105][105]={{0}};
		
		for(i = 1; i <= row; i++)
		{
			for(j = 1; j <= col; j++)
			{
				cin >> arr[i][j];//������� 
			}
		}
		
		int cutrow = 0,cutcol = 0;//ȥ�����к��� 
		
		while(row >= 1 + 2 * cutrow && col >= 1 + 2 * cutcol)//�о��������û�г����ұ� �������� 
		{
			
			for(i = 1 + cutcol; i <= col - cutcol; i++)//��һ�ж�ȡ 
			{
				cout << arr[cutrow + 1][i] << endl;
				tmp++;
				if(tmp == row * col) break;//������break 
			}
			
			if(tmp == row * col) break;//������break 
			
			for(i = cutrow + 2; i <= row - cutrow; i++)//���һ�� 
			{
				cout << arr[i][col - cutcol] << endl;
				tmp++;
				if(tmp == row * col) break;
			}
			
			if(tmp == row * col) break;
			
			for(i = col - cutcol - 1; i >= 1 + cutcol; i--)//���һ�� 
			{
				cout << arr[row - cutrow][i] << endl;
				tmp++;
				if(tmp == row * col) break;
			}
			
			if(tmp == row * col) break;
			
			for(i = row - cutrow - 1; i >= 2 + cutrow; i--)//��һ�� 
			{
				cout << arr[i][1 + cutcol] << endl;
				tmp++;
				if(tmp == row * col) break;
				
			}
			
			if(tmp == row * col) break;
			
			cutcol++;//ȥ�����к���++ 
			cutrow++;
		}
    }
    
    return 0; 
} 
