// ��֤��°ͺղ��� 
//1800012784 ����
//10.6 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int checkprime ( int );//������˼���Լ�д�˸�������֮���ûʲô��˵���� 

int main()
{
	int a, n, m, b;
    cin >> m;
    n = m;
	
	for ( a = 2 ; a <= (n / 2) ; a++ )
	{
		if (checkprime ( a ))//�þ������� 
		{
			b = m - a;
			
			if (checkprime ( b ))
			{
				cout << a << " " << b << endl;
			}
			
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

