#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int bac[10][10] = {{0}} ,bacp[10][10] = {{0}};
	int n = 0, m = 0, d = 0, i, j, k;
	int step[2][9] = {{0,-1,-1,-1,0,+1,+1,+1,0},{-1,-1,0,+1,+1,+1,0,-1,0}};
	cin >> m;
	bac[5][5] = m;
	cin >> n;
	for(d = 1; d <= n; d++)
	{
		for(i = 1; i <= 9; i++)
		{
			for(j = 1; j <= 9; j++)
			{
				if(bac[i][j] != 0) 
				{
				 	     for(k = 0; k < 9;k++) bacp[i + step[0][k]][j + step[1][k]] +=  bac[i][j];
			        }
			}
		}
		
		for(i = 1; i <= 9; i++)
		{
			for(j = 1; j <= 9; j++)
			{
				bac[i][j] += bacp[i][j];
				bacp[i][j] = 0;
			}
		}
		
		
	}
	
	for(i = 1; i <= 9; i++)
	{
	      for(j = 1; j <= 9; j++)
			{
				if(j < 9) cout << bac[i][j] << " ";
				if(j == 9) cout << bac[i][9] << endl;
			}
	}
}

