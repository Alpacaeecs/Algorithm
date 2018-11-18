#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int s[5][5] = {{0}}, i, j, k, n, m, s1, s2, s3, s4;
	
	for(n = 0; n < 65536; n++)
	{
		m = n;
		int flag = 0;
		for(i = 1; i <= 4; i++)
		{
			for(j = 1; j <= 4; j++)
			{

				
				s[i][j] = m % 2;
				m /= 2;
				
			}
		}
		
		s1 = s[1][1] + s[1][2] + s[1][3] + s[1][4]; 
		s2 = s[2][1] + s[2][2] + s[2][3] + s[2][4];
		s3 = s[3][1] + s[3][2] + s[3][3] + s[3][4];
		s4 = s[4][1] + s[4][2] + s[4][3] + s[4][4];
		
		if(s1 == 2 && s2 == 2 && s3 == 2 && s4 ==1) flag++;
		else continue;
		
		s1 = 0;
		
		for(i = 1; i <= 4; i++)
		{
			for(j = 1; j <= 4; j++)
			{
				s1 += s[j][i];
			}
			
			if(s1 == 3)
			{
				flag++;
				break;
			 } 
			 else
			 {
			 	s1 = 0;
			 }
		}
		
		if(flag != 2) continue;
		
		if(s[1][4] == 1 && s[4][4] != 1 && s[2][2] != 1) flag++;
		else continue;
		
		int cnt = 0;
		
		for(j = 1; j <=4; j++)
		{
			if(s[1][j] == 1)
			{
				if(s[3][j] == 0) cnt++;
				else break;	
			}
			
			if(s[3][j] == 1)
			{
				if(s[4][j] == 0) cnt++;
				else break;
			}
		}
		
		if(cnt == 4) flag++;
		else continue;
		
		cnt = 0;
		
		for(j = 1; j <=4; j++)
		{
			if(s[2][j] == 1)
			{
				if(s[3][j] == 0) cnt++;
				else break;	
			}
			
		}
		
		if(cnt == 2) continue;
		else flag++;
		
		cnt = 0;
		
		for(i = 1; i <= 4; i++)
		{
			if(s[i][4] == 1)
			{
				if(s[i][3] == 1) cnt++;
			}
		}
		
		if(cnt != 0) continue;
		else flag++;
		 
		if(flag == 6)
		{
		
			for(i = 1; i <= 3; i++)
			{
				cnt = 0;
				for(j = 1; j <= 4; j++)
				{
					if(s[i][j] == 1)
					{
						if(cnt == 0)
						{
							 cout << j << " ";
							 cnt++;
						}
						else
						{
							cout << j << endl;
							cnt = 0;
						}
					}
				}
			}
			
			
			
			for(j = 1; j <= 4; j++)
			{
				if(s[4][j] == 1)
				{
					cout << j << endl;	
				}
			}
				
			
		}
		
		for(i = 1; i <= 4; i++)
		{
			for(j = 1; j <= 4; j++)
			{
				s[i][j] = 0;
			}
		
		}
	} 
 } 
