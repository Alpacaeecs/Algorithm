#include <iostream>
using namespace std;
int main()
{
	int time, cnt, leap, loss, n ,i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		loss = 0;
		cin >> cnt;
		for(int j = 1; j <= cnt; j++)
		{
			cin >> leap;
			time = leap + loss;
			if(time <= 60)
			{
				if(time <= 57) loss += 3;
				if(time > 57) loss += 60 - time;
			}
			
			
		}
		cout << 60 - loss << endl;
		
	}
}
