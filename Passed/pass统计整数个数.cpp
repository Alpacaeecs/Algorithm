#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j, f, k, n, num, flag, y, tep = 0;
	cin >> n;
	static int a[100] = {0}, b[100] = {0};
	for (i = 0; i < n; i++)
	{
		cin >> num;
		flag = 0;
		if (num == 0)
		{
			tep ++;
		}
		
		for (j = 0; j <= i; j++)
		{ 
			if(num == a[j])
			{
				b[j] ++;
				flag = 1;
				break;
				
			}
			
		}
		
		if (flag == 0)
		{
			a[i + 1] = num;
			b[i + 1] = 1;
		}
		
		
	}
	
	for (k = 0; k <= n; k++)
	{
		for (f = 0; f <= n - 1; f++)
		{
			if (a[f] > a[f + 1])
			{
				swap (a[f],a[f + 1]);
				swap (b[f],b[f + 1]);
			}
		}
	}
	
	for (y = 0; y <= n; y++)
	{
		if(a[y] < 0)
		{
			cout << a[y] << ":" << b[y] << endl;
		}
	}
	
	if (tep != 0)
	{ 
	    cout << "0:" << tep << endl;
	    
	}
	
	for (y = 0; y <= n; y++)
	{
		if(a[y] > 0)
		{
			cout << a[y] << ":" << b[y] << endl;
		}
	}
	return 0;
}
