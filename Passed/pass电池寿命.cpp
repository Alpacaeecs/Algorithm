//电池寿命 
//1800012784 刘鹏 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	double single, average, sum, longest, i, k;//single是每节电池的电量， average是均值， sum是总量， longest是最长的电池， k是电池数量 
	while (cin >> k)
	{
	
	sum = 0;//清零 
	longest = 0;

    for (i = 1; i <= k; i ++)
	{
		cin >> single;//依次输入电池的电量 
		sum = sum + single;//得到总量 
	    if (single > longest)//得到最大值 
		    {
		    	longest = single;
			
			}	
	 } 
	 
	 
	 average = sum / 2;
	
	if (longest > average)//不能用完 
	{
		cout << fixed << setprecision(1) << sum - longest << endl;
	}
	else//可以用完 
	{
		cout << fixed << setprecision(1) << average << endl;
	}
	
    }
	return 0;
} 
	 
	 



