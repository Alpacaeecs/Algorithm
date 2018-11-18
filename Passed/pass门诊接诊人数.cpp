/*门诊计数 医院某科门诊早上开两个小时。从8点开始可以排队，
9点开始正式门诊，每个病人需要看10分钟
(若最后剩余不足10分钟，则不进行门诊)，11
点门诊结束。输入包含n（n<=20）个病人的到达时间
（距离8点的分钟数），输出最终得到门诊的病人数。
第一行为病人数n。 
之后有n行，每行为病人到达的时间 */
//刘鹏 1800012784
//10.17
#include <iomanip>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int t[120] = {0};//t为每个时刻被占的情况，1为有人 
	int a[12] = {0};//a为9；00以后来的人 
	int i, j, delay, n, time, app = 0, arr = 0, p = 0, flag = 0;//i，j为循环变量，delay为延迟时间，n为人数，time为到达时间，app为开门前来的人，arr是之后来的人，p为能看到的人，flag为指针 
	cin >> n;
	for (i = 1; i <= n; i++)//读入时间 
	{
		cin >> time;
		
		if (time <= 59)//开门前来的人 
		{
			app ++;
			
		}
		else if (time <= 170)//关门前来的人 
		{
			arr ++;
			a[arr] = time;
			
		}
	}
	
	if (app >= 12)//如果开门前来的很多就不再接诊 
	{
		cout << "12" << endl;
		flag = 1;
	}
	else
	{
		for(j = 1; j <= app * 10; j++)//开始的时段是开门前的人看 
		{
			t[j] = 1;
		}
		
	}
	
	sort (a, a + arr + 1);//给后来人排序 
	
	for(j = 1; j <= arr; j++)//后来的人 
	{
		for(delay = 0; t[a[j] - 60 + delay] != 0; delay ++)//找每个后来人需要等待的时间 
		{
			
		}
		if(a[j] - 60 + delay <= 110)//在关门前能排上 
		{
			p ++;//人数++ 
		}
		
		for (i = a[j] - 60 + delay; i < a[j] - 60 + delay + 10; i++)
		{
			t[i] = 1;//排上的人占掉时段 
		}
		
	}
	
	if (flag == 0)
	    cout << app + p << endl;//输出 
	
		
	
	return 0; 
}
