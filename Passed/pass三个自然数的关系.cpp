#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main ()
{
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0, j, st, nd, rd;
	do
	{
		st = 100 * num[1] + 10 * num[2] + num[3];
		nd = 100 * num[4] + 10 * num[5] + num[6];
		rd = 100 * num[7] + 10 * num[8] + num[9];
		if(nd == 2 * st && rd == 3 * st)
		{
			cout << st << " " << nd << " " << rd << endl;
		}
	}while( next_permutation(num + 1, num + 10));
}
