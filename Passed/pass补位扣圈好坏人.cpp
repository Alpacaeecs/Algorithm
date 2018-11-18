#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int k;
	cin >> k;
	while(k != 0)
	{
		int num = 1,off = 0, i = 1 + k;
		while(off < k)
		{
  		 	  num = ((num + i - 1) % (2 * k - off));//²¹Î»¿ÛÈ¦·¨ 
  		 	 
  			 if(num == 0)
			   {
			   	num = 2 * k - off;
	
 				    }	 
				   
			 if(num > k)
  		 	  {
  		 	  	off++;
 		 	  	
  				}
		         else
		         {
		         	num = 1;  off = 0;
		         	i ++;
		         
			 }
		}
		
		cout << i << endl;
		cin >> k;
	}
}
