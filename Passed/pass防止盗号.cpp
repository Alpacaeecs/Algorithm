//��㱻����
//1800012784 ����
//10.27
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char add[100] = {'a'};//addΪ�����ַ 
	int n, ed = 0;//nΪ�˺������� edΪ�Ƿ��ҵ���㱻���ŵı�� 
	char c;//c���ڷŻس� 
	
	cin >> add;//�����ַ 
	cin >> n;//�����˻� 
	
	for(int i = 1; i <= n; i++)
	{
		int flag = 0;//flag���ڱȽ��ж�����ͬ 
		
		char nickName[100];//�û��� 
		char password[100];//���� 
		char a[100] = {'a'};//���� 
		
		c = cin.get();
		
		cin >> nickName; 
		cin >> password;
		cin >> a;
		
	
		if(strcmp(a , add) == 0)//ȫ����� 
		{
			
			ed = 1;//�ҵ� 
			cout << nickName << " ";
			
			for(int j = 0; j <= strlen(password) - 1; j++)//����Сд 
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
			
			cout << password << endl;//��� 
		}
		
	}
	
	if(ed == 0)//û�ҵ� 
	{
		cout << "empty" << endl;
	}
	
	return 0;	
}
