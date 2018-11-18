#include <iostream>
using namespace std;
int main()
{
	int a[100010] = {0}, b[100010] = {0}, n, i, j, k, h, m, s, ye, mon, d, x = 0, y = 0;
	
	cin >> n;
	
	for(i = 1; i <= n; i++)
	{
		cin >> h >> m >> s >> ye >> mon >> d;
		a[i] = 60 * 60 * h + 60 * m + s;
		b[i] = 40 * mon + d;
	}
	
	for(i = 1; i <= n; i++)
	{
		if(a[i] >= 7 * 60 * 60 && a[i] <= 8 * 60 * 60 + 30 * 60) 
		{
			x++;
			j = i;
			while(b[j + 1] == b[j] && a[j + 1] >= 7 * 60 * 60 && a[j + 1] <= 8 * 60 * 60 + 30 * 60)
			{
				j++;
			}
			i = j;
			continue;
		}
	}
	
	for(i = 1; i <= n; i++)
	{
		if(a[i] >= 16 * 60 * 60 && a[i] <= 21 * 60 * 60 + 30 * 60) 
		{
			j = i;
			while(b[j + 1] == b[j] && a[j + 1] <= 21 * 60 * 60 + 30 * 60)
			{
				j++;
			}
			if(a[j] - a[i] >= 30 * 60)  y++;
			i = j;
			continue;
			
			
		}
	}
	cout << max(0 , 10 - x) << " " << max(0 , 20 - y);
}
