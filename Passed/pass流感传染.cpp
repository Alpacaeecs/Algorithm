#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int room[400][400] = {{0}};
	int m, i, j, k;
	char c;
	cin >> m;
	for(i = 100 + 1 ; i <=100 + m; i++)
	{
		for(j =100 + 1; j <=100 + m; j++)
		{
			cin >> c;
			switch(c)
			{
				case '.': room[i][j] = 0; break;
				case '#': room[i][j] = -1; break;
				default : room[i][j] = 1; break;
			}
		}
	}
	
	int d;
	cin >> d;
	for(k = 2; k <= d; k++)
	{
		for(i = 100 + 1 ; i <=100 + m; i++)
		{
			for(j = 100 + 1; j <= 100 + m; j++)
			{
				if(room[i][j] > 0 && room[i][j] < k)
				{
					room[i - 1][j] == 0 ? (room[i - 1][j] = k) : (room[i - 1][j] = room[i - 1][j]);
					room[i + 1][j] == 0 ? (room[i + 1][j] = k) : (room[i + 1][j] = room[i + 1][j]);
					room[i][j - 1] == 0 ? (room[i][j - 1] = k) : (room[i][j - 1] = room[i][j - 1]);
					room[i][j + 1] == 0 ? (room[i][j + 1] = k) : (room[i][j + 1] = room[i][j + 1]);
					
					 
				}
			}
		}
	}
	int cnt = 0;
	for(i = 100 + 1 ; i <=100 + m; i++)
	{
		for(j = 100 + 1; j <= 100 + m; j++)
		{
			if(room[i][j] > 0) cnt++;
		}
	}
	
	cout << cnt << endl;
	
 } 
