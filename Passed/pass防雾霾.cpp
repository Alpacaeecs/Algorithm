//������ 
//1800012784 ���� 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int n, m, i, num = 1, hp;// nΪ������m����Ѫ��hp��Ѫ����num�Ǽ����� 
	cin >> n >> m;
	hp = m;
	for (i = 1; i <= n; i ++)
	{
		int a;
		cin >> a;
		hp = hp - a;
		if (hp <= 0 && i != n)//���һ�첻�� 
		{
			num = num + 1;
			hp = m;
		}
		
	}
	cout << num;
	return 0; 

}
