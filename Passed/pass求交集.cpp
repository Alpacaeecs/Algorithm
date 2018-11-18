#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[210] = {0}, b[210] = {0}, s[210] = {0};
	int am = 0, bm = 0, sm = 0, flag, ed = 0;
	char c = ',';
	while(c != '\n')
	{
		flag = 0;
		cin >> sm;
		for(int i = 1; i <= am; i++)
		{
			if(a[i] == sm) {
				flag = 1;
				break;
			}
		}
		
		if(flag == 0)
		{
			am++;
			a[am] = sm;
		}
		
		c = getchar();
	 } 
	 
	 
 	 c = ',';
	while(c != '\n')
	{
		flag = 0;
		cin >> sm;
		for(int i = 1; i <= bm; i++)
		{
			if(b[i] == sm) {
				flag = 1;
				break;
			}
			
		}
		
		if(flag == 0)
		{
			bm++;
			b[bm] = sm;
		}
		
		c = getchar();
	 } 
	 
	 for(int i = 1; i <= am; i++)
	 {
	 	for(int j = 1; j <= bm; j++)
	 	{
	 		if(b[j] == a[i]) 
	 		{
	 			ed++;
	 			s[ed] = a[i];
	 			break;
			 }
		 }
	 }
	 
	 if(ed == 0) 
	 {
	 	cout << "NULL" << endl;
	 }
	 else
	 {
	     	sort(s + 1, s + ed + 1);
		     
		for(int i = 1; i < ed; i++) cout << s[i] << ",";
		
		cout << s[ed] << endl;	
	 }
 
	 
}
