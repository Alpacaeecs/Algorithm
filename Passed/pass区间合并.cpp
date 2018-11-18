#include <iostream>
#include <algorithm>
using namespace std;

int cmp1(int i, int j)
{
	if(i > j) return j;
	else return i;
}

int cmp2(int i, int j)
{
	if(i > j) return i;
	else return j;
}
int main()
{
	int n, begin = 200001, end = 0, x[200010] = {0}, a, b, ed = 0 ,min = 200001, max = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		
		if(b > a)
		{
			for(int j = 2 * a; j <= 2 * b - 1; j++ )
		        {
	  		 	x[j] = 1;
		        }
		}
		if(a == b)
		{
			if(2 * a < begin) 
			{
				begin = 2 * a;
				x[2 * a - 1] = 1;
				
			}
			if(2 * a - 1 > end) 
			{
			     end = 2 * a - 1;
			     x[2 * a - 1] = 1;}
		}
	}
	
	for(int i = 1; i <= 200001; i++)
	{
		if(x[i] == 1)
		{
			begin = i;
			break;
		}
	}
	
	for(int i = 200001; i >= 1; i--)
	{
		if(x[i] == 1)
		{
			end = i;
			break;
		}
	}
	
	int flag = 1;
	for(int i = begin; i < end; i++)
	{
	
		
		
		if(x[i] == 0 && flag == 1)
		{
			cout << i / 2 << " ";
			flag = 0;ed = 1;
			
		}
		
		if(x[i] == 1 && flag == 0)
		{
			cout << (i + 1) / 2 << endl;
			flag = 1;
		}
		
		
 }
	
	if(flag == 0)
	{
		cout << (end + 1) / 2 << endl;
	}
	
	if(ed == 0) cout << "Not Needed";
}
