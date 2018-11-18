//有年代的病历
//1800012784 刘鹏
//10.27
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

struct names
{
	char a[50];
};

int cmp(names i, names j)
{
	if(strcmp(i.a , j.a) == -1) return 1;
	else return 0; 
}

int main()
{
	int n;
	names b[10000];
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		
		cin >> b[i].a;
		
		for(int j = 0; j < strlen(b[i].a); j++)
		{
			if(b[i].a[j] >= 97)
			{
				if(b[i].a[j] <= 119)
				{
					b[i].a[j] = (char)(b[i].a[j] - 29);
					continue;					
				}
				if(b[i].a[j] > 119)
				{
					b[i].a[j] = (char)(97 + b[i].a[j] - 120 - 32);
					continue;
				}
			}
			
			if(b[i].a[j] <= 90)
			{
				if(b[i].a[j] <= 87)
				{
					b[i].a[j] = (char)(b[i].a[j] + 35);
					continue;
				}
				if(b[i].a[j] > 87)
				{
					b[i].a[j] = (char)(65 + b[i].a[j] - 88 + 32);
					continue;
				}
			}
			
			
					
		}
		
		for(int j = 0; j <= (int)(strlen(b[i].a) / 2) - 1; j++)
		{
		 	swap (b[i].a[j] , b[i].a[strlen(b[i].a) - 1 - j]);
		}
		
	}
	
	sort(b + 1, b + n + 1, cmp);
	
	for(int i = 1; i <= n; i++) cout << b[i].a << endl;
	

        
}
