//���㰰��
//1800012784 ����
//10.25
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	int mat[6][6] = {{0}}, i, j, sum1, sum2, k, m, flag = 0;//mat�Ǿ��� i�� j���к��У� sum1�� sum2���ж�����С�������ģ� k��m��ѭ�������� 
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			cin >> mat[i][j];//������� 
		}
	}
	
	for (i = 1; i <= 5; i++)
	{    
		for (j = 1; j <= 5; j++)
		{
			sum1 = 0;//�������� 
			sum2 = 0;
			for(k = 1; k <= 5; k++)
			{
				sum1 += (mat[i][j] >= mat[i][k]);//�������� sum1 ++�� 
			}
			for(m = 1; m <= 5; m++)
			{
				sum2 += (mat[i][j] <= mat[m][j]);//�������� sum2 ++�� 
			}
			
			if(sum1 == 5 && sum2 == 5)//���ж����� 
			{
				cout << i << " " << j << " " << mat[i][j] << endl;
				flag ++;//��� 
			}
			
		}
	}
	
	if(flag == 0)
	    cout << "not found" << endl;//not found
		
	return 0; 
} 
