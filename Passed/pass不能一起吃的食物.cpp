#include <iostream>
#include <string.h>
#include <stdio.h> 
using namespace std;
int main()
{
	char food[4][68];
	
	char pair[12][3][80] = { 
	  {" "," "," "},
	  {" ","potato", "persimmon"}, 
	  {" ", "egg", "glucide"}, 
	  {" ","onion", "honey"}, 
	  {" ","bean-curd", "honey"}, 
	  {" ","radish", "agaric"}, 
	  {" ","taro", "banana"}, 
	  {" ","pignut", "cucumber"}, 
	  {" ","beef", "chestnut"}, 
	  {" ","rabbit", "celery"}, 
	  {" ","crab", "persimmon"}, 
	  {" ","carp", "liquorice"}
	  };
		
	int i, j, k, n, flag = 0;
	char t;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> food[1];
		t = getchar();
		cin >> food[2];
		flag = 0;
		
		for(j = 1; j <= 12; j++)
		{
			for(k = 1; k <= 2; k++)
			{
				if(strcmp(food[1], pair[j][k]) == 0)
				{
					if(k == 1)
					{
						if(strcmp(food[2], pair[j][2]) == 0)
						{
							cout << "NO" << endl;
							flag = 1;
						}
					}
					
					if(k == 2)
					{
						if(strcmp(food[2], pair[j][1]) == 0)
						{
							cout << "NO" << endl;
							flag = 1;
						}
					}
				}
			}
		}
		
		
		if(flag == 0) cout << "YES" << endl;
	}
	
	
}/*4
cucumber chestnut
crab carp
rabbit celery
rabbit rabbit*/
