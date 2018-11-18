#include <iostream> 
#include <algorithm>
using namespace std;
int main()
{
	int n, l, i, j, s[18][18], k = 1, cnt = 1;
	cin >> n;
	for(l = 2; l <= 2 * n; l++)
	{
		if(l % 2 == 0)
		{
			for(i = l - 1, j = 1; ; i--, j++)
			{
				if(i > n) continue;
				else if (j > n) break;
				else if (i < 1) break;
				else
				{
					s[i][j] = cnt;
					cnt++;
				}
			}
		 } 
		 
		 else
		 {
		 	for(j = l - 1, i = 1; ; i++, j--)
		 	{
		 		if(j > n) continue;
		 		else if(i > n) break;
		 		else if(j < 1) break;
		 		else
		 		{
		 			s[i][j] = cnt;
		 			cnt++;
				 }
			 }
		 }
	}
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			j != n ? (cout << s[i][j] << " ") : (cout << s[i][j] << endl);
		}
	}
}
