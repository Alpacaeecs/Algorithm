//����ı任
//1800012784 ���� 
//10.26 
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n, i, j;//nΪ����Ľ����� i�� jΪ�к��е�ѭ������ 
	int flag = 0;//��� 
	char a[15][15], b[15][15];//�ַ����� 
	
	cin >> n;//������� 
	
	if (n == 1)//һ�׵ı����涨Ϊ4 
	{    
	    cout << "4" << endl;
	    flag = 1;
    }
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			cin >> a[i][j];//�������a 
		}
	}
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			cin >> b[i][j];//����b 
		}
	}
	
	
	int i1, j1, i2, j2, sum = 0;//i1�� j1Ϊ��һ����������У� 2ͬ�� ��sumΪ�жϱ��� 
	
	
	
	
	for (i1 = 1; i1 <= n; i1++)
	{
		for (j1 = 1; j1 <= n; j1++)
		{
			i2 = j1;
			j2 = n + 1 - i1;//˳ʱ��䷨ 
			
			if(a[i1][j1] == b[i2][j2])
			{
				sum++;//���ж��ٸ���ͬ�� 
			}
		}
	}
	
	if (sum == n * n && flag == 0)//���ȫ����ͬ����û�ҵ������ı䷨ 
	{
	    cout << "1" << endl;//���1 
	    flag = 1;//���ҵ� 
    }
	
	sum = 0;
	
	
	
	
	
	for (i1 = 1; i1 <= n; i1++)
	{
		for (j1 = 1; j1 <= n; j1++)
		{
			i2 = n + 1 - j1;
			j2 = i1;//��ʱ�� 
			
			if(a[i1][j1] == b[i2][j2])
			{
				sum++;
			}
		}
	}
	
	if (sum == n * n && flag == 0)
	{
	    cout << "2" << endl;
	    flag = 1;//�ҵ� 
    }
    
    sum = 0;
	
	
	
	
	
	
	for (i1 = 1; i1 <= n; i1++)
	{
		for (j1 = 1; j1 <= n; j1++)
		{
			i2 = n + 1 - i1;
			j2 = n + 1 - j1;//�Գ� 
			
			if(a[i1][j1] == b[i2][j2])
			{
				sum++;
			}
		}
	}
	
	if (sum == n * n && flag == 0)
	{
	    cout << "3" << endl;
	    flag = 1;//�ҵ� 
    }
    
    sum = 0;
	
	
	
	
	
	for (i1 = 1; i1 <= n; i1++)
	{
		for (j1 = 1; j1 <= n; j1++)
		{
			i2 = i1;
			j2 = j1;
			
			if(a[i1][j1] == b[i2][j2])
			{
				sum++;
			}
		}
	}
	
	if (sum == n * n && flag == 0)
	{
	    cout << "4" << endl; 
	    flag = 1;//�ҵ� 
    }
    
    
	
	
	if (flag == 0)//�����仯 
        cout << "5" << endl;
		
		
	return 0; 
}
