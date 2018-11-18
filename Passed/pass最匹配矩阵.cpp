#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m, n, r, s, i, j, k, l;
	int a[300][300] = {{0}}, b[300][300] = {{0}};
	cin >> m >> n;
	for(i = 1; i <= m; i++)
	{
		for(j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> r >> s;
	for(i = 1; i <= r; i++)
	{
		for(j = 1; j <= s; j++)
		{
			cin >> b[i][j];
		}
	}
	int sum = 0, min = 10000000, mini = 0, minj = 0; 
	for(i = 1; i <= 1 + m - r; i++)
	{
		for(j = 1; j <= 1 + n - s; j++)
		{
			for(k = i; k <= i + r - 1; k++)
			{
				for(l = j; l <= j + s - 1; l++)
				{
					sum += abs(a[k][l] - b[k - i + 1][l - j + 1]);
				}
			}
			
			
			if(sum < min) 
			{
				min = sum;
				mini = i;
				minj = j;
			}
			
			sum = 0;
		}
	}
	
	
	for(i = mini; i <= mini + r - 1; i++)
	{
		for(j = minj; j <= minj + s - 1; j++)
		{
			(j != minj + s - 1) ? (cout << a[i][j] << " ") : (cout << a[i][j] << " " << endl);
		}
	}
}
