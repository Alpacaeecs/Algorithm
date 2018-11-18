#include <iostream>
using namespace std;
int main()
{
	int n, m, i, j, k, l, cnt;
	cin >> m >> n;
	int c[500][500] = {{0}};
	for(i = 1; i <= n; i++)
	{
		
		cin >> k >> l;
		
		if(i % 2 == 1)
		{
			c[k + 1][l + 1] = 1;
			
			cnt = 0;
			
			if(c[k][l + 1] == 1 || c[k + 2][l + 1] == 1)
			{
				j = 0;
				while(c[k - j][l + 1] == 1)
				{
					cnt ++;
					j ++;
				}
				
				j = 2;
				while(c[k + j][l + 1] == 1)
				{
					cnt ++;
					j ++;
				}
				
				if(cnt >= 4)
				{
					cout << i << " 0" << endl;
					break;
				}
				
			}
			
			cnt = 0;
			if(c[k + 1][l + 2] == 1 || c[k + 1][l] == 1)
			{
				j = 0;
				while(c[k + 1][l - j] == 1)
				{
					cnt ++;
					j ++;
				}
				
				j = 2;
				while(c[k + 1][l + j] == 1)
				{
					cnt ++;
					j ++;
				}
				
				if(cnt >= 4)
				{
					cout << i << " 0" << endl;
					break;
				}
				
			}
			
			cnt = 0;
			if(c[k + 2][l + 2] == 1 || c[k][l] == 1)
			{
				j = 0;
				while(c[k - j][l - j] == 1)
				{
					cnt ++;
					j ++;
				}
				
				j = 2;
				while(c[k + j][l + j] == 1)
				{
					cnt ++;
					j ++;
				}
				
				if(cnt >= 4)
				{
				cout << i << " 0" << endl;
					break;
				}
				
			}
			
			cnt = 0;
			if(c[k][l + 2] == 1 || c[k + 2][l] == 1)
			{
				j = 0;
				while(c[k - j][l + j + 2] == 1)
				{
					cnt ++;
					j ++;
				}
				
				j = 2;
				while(c[k + j][l - j + 2] == 1)
				{
					cnt ++;
					j ++;
				}
				
				if(cnt >= 4)
				{
					cout << i << " 0" << endl;
					break;
				}
				
			}
			
			cnt = 0;
		} 
		 else
		 {
		 	c[k + 1][l + 1] = -1;
			cnt = 0;
			if(c[k][l + 1] == -1 || c[k + 2][l + 1] == -1)
			{
				j = 0;
				while(c[k - j][l + 1] == -1)
				{
					cnt ++;
					j ++;
				}
				
				j = 2;
				while(c[k + j][l + 1] == -1)
				{
					cnt ++;
					j ++;
				}
				
				if(cnt >= 4)
				{
					cout << i << " 1" << endl;
					break;
				}
				
			}
			
			cnt = 0;
			if(c[k + 1][l + 2] == -1 || c[k + 1][l] == -1)
			{
				j = 0;
				while(c[k + 1][l - j] == -1)
				{
					cnt ++;
					j ++;
				}
				
				j = 2;
				while(c[k + 1][l + j] == -1)
				{
					cnt ++;
					j ++;
				}
				
				if(cnt >= 4)
				{
					cout << i << " 1" << endl;
					break;
				}
				
			}
			
			cnt = 0;
			if(c[k + 2][l + 2] == -1 || c[k][l] == -1)
			{
				j = 0;
				while(c[k - j][l - j] == -1)
				{
					cnt ++;
					j ++;
				}
				
				j = 2;
				while(c[k + j][l + j] == -1)
				{
					cnt ++;
					j ++;
				}
				
				if(cnt >= 4)
				{
					cout << i << " 1" << endl;
					break;
				}
				
			}
			
			cnt = 0;
			if(c[k][l + 2] == -1 || c[k + 2][l] == -1)
			{
				j = 0;
				while(c[k - j][l + j + 2] == -1)
				{
					cnt ++;
					j ++;
				}
				
				j = 2;
				while(c[k + j][l - j + 2] == -1)
				{
					cnt ++;
					j ++;
				}
				
				if(cnt >= 4)
				{
					cout << i << " 1" << endl;
					break;
				}
				
			}
			
			cnt = 0;
		 }
	}
 } \
