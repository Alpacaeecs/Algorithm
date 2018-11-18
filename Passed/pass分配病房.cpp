
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	int no[50] = {0};
	double sym[50] = {0.0};
	int i, j, peo, num, cnt = 0;
	double ddl = 0, deg = 0;
	while(cin >> peo >> ddl)
	{
		cnt = 0;
		for (i = 1; i <= peo; i++)
		{
			cin >> num >> deg;
			if (deg >= ddl)
			{
				cnt ++;
				no[cnt] = num;
				sym[cnt] = deg;
			}
		}
		
		for(i = 1; i <= cnt; i++)
		{
			for(j = 1; j < cnt; j++)
			{
				if(sym[j] < sym [j + 1])
				{
					swap (sym[j], sym[j + 1]);
					swap (no[j], no[j + 1]);
				}
			}
		}
		
		for(i = 1; i <= cnt ; i++)
		{
			cout << setw(3) << setfill('0') << no[i] << " " << fixed << setprecision(1) << sym[i] << endl;
		}
		
		if(cnt == 0)
		{
			cout << "None." << endl;
		}
    }
    return 0;
} 

