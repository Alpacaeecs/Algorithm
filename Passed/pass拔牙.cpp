#include <iostream>
using namespace std;

int plans = 0;

int p(int left)
{
	if(left <= 0) return 0;
	if(left == 1) return 1;
	if(left == 2) return 2;
	if(left > 2)
	{
	    	return p(left - 1) + p(left - 2);	
	} 
}

int main()
{
	cin >> plans;
	cout << p(plans) << endl;
	return 0;
}
