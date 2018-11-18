#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	string s[100];
	char c = 'a';
	int cnt = 1;
	while(c != '\n')
	{
		c = getchar();
		if (c == '\n') break;
		c != ' ' ? (s[cnt] += c): (s[cnt] = s[cnt]);
		if(c == ' ') cnt++;  
	}
	
	for(int i = cnt; i >= 1; i--)
	{
		i != 1 ? (cout << s[i] << " ") : (cout << s[i] << endl);
	}
 } 
