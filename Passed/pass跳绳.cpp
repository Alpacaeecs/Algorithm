#include <iostream>
using namespace std;
int main()
{
	int i, n , k, s[100] = {0};
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> k;
		
		int j = 0 ,time=0;
		
		for(j = 1; j<=k; j++) cin >> s[j];
		
		if(k == 0 || s[j] >= 60) cout << "60" << endl;
		else
		{
			for(j = 1; j<=k; j++) 
			{
			      time = s[j] + 3 * (j - 1);
			      if(time >= 60) break;
			}
		
			if(time <= 60) cout << s[k] + (60 - time - 3 > 0 ? (60 - time - 3) : 0)  << endl;
			else
			{
			      	       if(s[j - 1] + 3 * (j - 1)  >= 60)
			      	       {
			      		    cout << s[j - 1] << endl;
   					}
					
					else
					{
						 cout << s[j - 1] + 60 - s[j - 1] - 3 * (j - 1) << endl;
					}
			}
		}
	
		
	}
}
