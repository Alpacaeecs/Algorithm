#include <iostream>
#include <iomanip>
using namespace std;

int e[4] = {0, 5, 2, 1};
int num[4] = {0};
int cnt = 0;

void select(int m, int k)
{
	if(m == 0) return;
	else if(k == 4) return;
	else
	{
		for(int i = 0; i <= m / e[k]; i++)
		{
			num[k] = i;
			if(m - i * e[k] == 0)
			{
				cnt++;
				cout << setw(3) << setfill('0') << cnt;
				for(int j = 3; j > k; j--) cout << "           0";
				for(int j = k; j >= 1; j--) cout << setw(12) << setfill(' ') << num[j];
				
				cout << endl;
			}
			
			select(m - i * e[k], k + 1);
		}
	}
} 


int main()
{
	int n;
	
	cin >> n;
	
	select(n, 1);
	
	return 0;
}
