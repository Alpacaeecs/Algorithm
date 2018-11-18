//差点被盗号
//1800012784 刘鹏
//10.27
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char add[100] = {'a'};//add为邮箱地址 
	int n, ed = 0;//n为账号数量， ed为是否找到差点被盗号的标记 
	char c;//c用于放回车 
	
	cin >> add;//输入地址 
	cin >> n;//输入账户 
	
	for(int i = 1; i <= n; i++)
	{
		int flag = 0;//flag用于比较有多少相同 
		
		char nickName[100];//用户名 
		char password[100];//密码 
		char a[100] = {'a'};//邮箱 
		
		c = cin.get();
		
		cin >> nickName; 
		cin >> password;
		cin >> a;
		
	
		if(strcmp(a , add) == 0)//全部相等 
		{
			
			ed = 1;//找到 
			cout << nickName << " ";
			
			for(int j = 0; j <= strlen(password) - 1; j++)//换大小写 
			{
				if(password[j] >= 97 && password[j] <= 122)
				{
					password[j] = (char)(password[j] - 32);
				        continue;
				}
				
				if(password[j] >= 65 && password[j] <= 90) 
				{
					password[j] = (char)(password[j] + 32);
					continue;
				}
				
			}
			
			cout << password << endl;//输出 
		}
		
	}
	
	if(ed == 0)//没找到 
	{
		cout << "empty" << endl;
	}
	
	return 0;	
}
