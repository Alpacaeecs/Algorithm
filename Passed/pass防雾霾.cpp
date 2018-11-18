//防雾霾 
//1800012784 刘鹏 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int n, m, i, num = 1, hp;// n为天数，m是满血，hp是血量，num是几条命 
	cin >> n >> m;
	hp = m;
	for (i = 1; i <= n; i ++)
	{
		int a;
		cin >> a;
		hp = hp - a;
		if (hp <= 0 && i != n)//最后一天不换 
		{
			num = num + 1;
			hp = m;
		}
		
	}
	cout << num;
	return 0; 

}
