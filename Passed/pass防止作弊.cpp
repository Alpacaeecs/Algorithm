#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
	int n1, n2, i, j, ifswitch1, whilefor1, ifswitch2, whilefor2;
	cin >> n1;
	
	char d;
	d = getchar();
	
	char s1[200];
	
	ifswitch1 = 0;
	whilefor1 = 0;
	
	for(i = 1; i <= n1; i++)
	{
		
		cin.getline(s1 , 200);
		
  		for(j = 0; j < strlen(s1) - 1 && strlen(s1) >= 2; j++)
		{
			if(s1[j] == 'i' && s1[j + 1] == 'f') ifswitch1++;
			if(strlen(s1) > 2 && s1[j] == 'i' && s1[j + 1] == 'f' && s1[j + 2] != ' ') ifswitch1--;
		}
				
		
		for(j = 0; j < strlen(s1) - 5 && strlen(s1) >= 6; j++)
		{
			if(s1[j] == 's' && s1[j + 1] == 'w' && s1[j + 2] == 'i' && s1[j + 3] == 't' && s1[j + 4] == 'c' && s1[j + 5] == 'h') ifswitch1++;
			if(strlen(s1) > 6 && s1[j] == 's' && s1[j + 1] == 'w' && s1[j + 2] == 'i' && s1[j + 3] == 't' && s1[j + 4] == 'c' && s1[j + 5] == 'h' && s1[j + 6] != ' ') ifswitch1--;
		}
				
		for(j = 0; j < strlen(s1) - 2 && strlen(s1) >= 3; j++)
		{
			if(s1[j] == 'f' && s1[j + 1] == 'o' && s1[j + 2] == 'r') whilefor1++;
			if(strlen(s1) > 3 && s1[j] == 'f' && s1[j + 1] == 'o' && s1[j + 2] == 'r' && s1[j + 3] != ' ') whilefor1--;
		}
		
		for(j = 0; j < strlen(s1) - 4 && strlen(s1) >= 5; j++)
		{
			if(s1[j] == 'w' && s1[j + 1] == 'h' && s1[j + 2] == 'i' && s1[j + 3] == 'l' && s1[j + 4] == 'e') whilefor1++;
			if(strlen(s1) > 5 && s1[j] == 'w' && s1[j + 1] == 'h' && s1[j + 2] == 'i' && s1[j + 3] == 'l' && s1[j + 4] == 'e' && s1[j + 5] != ' ') whilefor1--;
		}
	}
	
	
	cin >> n2;
	
	d = getchar();
	
	
	ifswitch2 = 0;
	whilefor2 = 0;
	
	for(i = 1; i <= n2; i++)
	{
		
		cin.getline(s1 , 200);
		
		for(j = 0; j < strlen(s1) - 1 && strlen(s1) >= 2; j++)
		{
			if(s1[j] == 'i' && s1[j + 1] == 'f') ifswitch2++;
			if(strlen(s1) > 2 && s1[j] == 'i' && s1[j + 1] == 'f' && s1[j + 2] != ' ') ifswitch2--;
		}
				
		
		for(j = 0; j < strlen(s1) - 5 && strlen(s1) >= 6; j++)
		{
			if(s1[j] == 's' && s1[j + 1] == 'w' && s1[j + 2] == 'i' && s1[j + 3] == 't' && s1[j + 4] == 'c' && s1[j + 5] == 'h') ifswitch2++;
			if(strlen(s1) > 6 && s1[j] == 's' && s1[j + 1] == 'w' && s1[j + 2] == 'i' && s1[j + 3] == 't' && s1[j + 4] == 'c' && s1[j + 5] == 'h' && s1[j + 6] != ' ') ifswitch2--;
		}
				
		for(j = 0; j < strlen(s1) - 2 && strlen(s1) >= 3; j++)
		{
			if(s1[j] == 'f' && s1[j + 1] == 'o' && s1[j + 2] == 'r') whilefor2++;
			if(strlen(s1) > 3 && s1[j] == 'f' && s1[j + 1] == 'o' && s1[j + 2] == 'r' && s1[j + 3] != ' ') whilefor2--;
		}
		
		for(j = 0; j < strlen(s1) - 4 && strlen(s1) >= 5; j++)
		{
			if(s1[j] == 'w' && s1[j + 1] == 'h' && s1[j + 2] == 'i' && s1[j + 3] == 'l' && s1[j + 4] == 'e') whilefor2++;
			if(strlen(s1) > 5 && s1[j] == 'w' && s1[j + 1] == 'h' && s1[j + 2] == 'i' && s1[j + 3] == 'l' && s1[j + 4] == 'e' && s1[j + 5] != ' ') whilefor2--;
		}
	}
	
	if(whilefor1 == whilefor2 && ifswitch1 == ifswitch2) cout << "Yes" << endl;
	else cout << "No" << endl;
	
}
/*
3
int main() {
    printf("Hello World!");
}
4
int main()
{
    printf("Hello World!");
}*/
