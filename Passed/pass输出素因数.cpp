//����������� 
//1800012784 ���� 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;

int checkprime (int);//���� 


int main()
{
	int pri, i, left;//left�Ƕ�ĳһ���������������� 
	cin >> left;
	
	for (i = 2; i <= left;)//��С��left������ 
	{
		if (checkprime(i))//�������б�leftС������ 
		{
			
			if (left % i == 0)
			{
				do
				{
					left = left / i;
					
				}while (left % i == 0&&left >= i);
				
				
				cout << i << endl;
				
				
				
			}
			else
			{
				i = i + 1;
			}
		 	
		}
		else
		{
			i = i + 1;
		}
		
		
		
		
	}
	
	return 0;
}

int checkprime (int af)//�������� 
{
	for(int i = 2; i <= sqrt ( af ); i++)
	{
		if ( af % i == 0)
		return 0;
	}
	return 1;
}
