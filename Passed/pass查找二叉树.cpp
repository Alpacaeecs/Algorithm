//������
//1800012784 ����
//11.18 
#include <iostream>
#include <math.h>
using namespace std;

int det[5000] = {0};//��¼ÿһ��������
 
int upp(int ov, int ed, int row)//���ϲ��� 
{
	if(ov == ed) return row;
	
	else
	{
		if(ov > ed) det[row] = 1, upp(ov - ed, ed, row + 1);//�Ҳ���ȥ 
	        else det[row] = 2, upp(ov, ed - ov, row + 1);//�����ȥ 
	}
}

int main()
{
	int l, n;
	cin >> n;
	for(l = 1; l <= n; l++)
	{
		int iniov, inied, line, col, iniline;
		cin >> iniov >> inied;//�����ʼ�ķ��ӣ� ��ĸ 
		
		line = upp(iniov, inied, 0);//�����Ϸ������� 
		
		iniline = pow(2, line) - 1;//�Ϸ�����Ŀ 
		
		int w = 1;
		for(int k = line - 1; k >= 0; k--)//���������е���� 
		{
			if(det[k] == 1) w = w * 2;
			else w = w * 2 - 1;
		}
		
		
	
		cout << iniline + w << endl;
	}
	
	return 0; 
}
