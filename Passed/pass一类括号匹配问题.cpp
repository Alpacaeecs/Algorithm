#include <iostream> 
#include <string.h>
#include <algorithm>
using namespace std;
struct match{
	int q;
	int p;
};

bool cmp (match i, match j)
{
     	 if((i.q - i.p) < (j.q - j.p)) return true;
     	 else if ((i.q - i.p) == (j.q - j.p) && i.p < j.p) return true;
     	 else return false;
}
int main()
{
	string s;
	int left = 0, len, i, l[1000] ,pair = 0, flag = 0 , f = 0;
	match m[1000];
	cin >> s;
	len = s.length();
	for(i = 0; i < len; i++)
	{
		if(s[i] == '(')
		{
			left ++;
			l[left] = i;
			
		}
		if(s[i] == ')') 
		{
		 	if(left == 0)
			{
				cout << "mismatch" << endl;
				f = 1;
				break;
			}
			if(left > 0)
			{
				pair++;
				m[pair].p = l[left];
				m[pair].q = i;
				left--;
			}
			
			
		}
	}
	
	if(left > 0) 
	{
	 	cout << "mismatch" << endl;
	 	f = 1;
	}
	else
	{
		sort(m + 1, m + 1 + pair, cmp);
	}
	
	for(i = 0; i < len; i++)
	{
		if(s[i] == '(' || s[i] == ')') flag = 1;
	}
	
	if(flag == 0)
	{
		cout << "0,0" << endl;
		f = 1;
	}
	else
	{
		if(f != 1) for(i = 1; i <= pair ; i++) cout << m[i].p + 1 << "," << m[i].q + 1 << endl;
	}
}
