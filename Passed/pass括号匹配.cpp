#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	string s[300], lab[300];
	int n, i, j, k, left, right;
	cin >> n;
	for(k = 1; k <= n; k++)
	{
 	      	int len = 0;
 		left = 0;
 		right = 0;
 		
		 cin >> s[k];
   		
     		
     		len = s[k].length();
     		
     		for(i = 0; i < len; i ++) lab[k][i] = ' ';
     		
     		
		for(i = 0; i < len; i++)
     		{
     			if(s[k][i] == '(')
     			{
    			 	left ++;	   				
	     		}
	     		if(s[k][i] == ')')
	     		{
	     			if(left == 0)
	     			{
	     				lab[k][i] = '?';
		     		}
		     		if(left > 0)
		     		{
		     			left--;
				     }
	     		}
     			}
		
		for(i = len - 1; i >= 0; i--)
     		{
     			if(s[k][i] == ')')
     			{
    			 	right++;	   				
	     		}
	     		if(s[k][i] == '(')
	     		{
	     			if(right == 0)
	     			{
	     				lab[k][i] = '$';
		     		}
		     		if(right > 0)
		     		{
  		  			right--;
				     }
	     		}
     			}
			     
		for(i = 0; i < len; i ++) cout << s[k][i] ;
		cout << endl;
		for(i = 0; i < len; i ++) cout << lab[k][i] ;
		cout << endl;	     
			     	     
	}
	
 } 
