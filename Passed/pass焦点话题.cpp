//���㻰�� 
//1800012784 ���� 
//10.26 
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int g[105][105] = {{0}}, sum[105] = {0};//g��i����j����iͬѧ�ἰj�Ĵ����� sum��j����j���ἰ���ܴ����� 
	int n, i, j;//n��΢������ i�� j ��ѭ������ 
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		int name, cnt, peo;//name�Ƿ����ߣ� cnt���ἰ�������� peo�Ǳ��ἰ�ĺ��� 
		cin >> name >> cnt;
		for (j = 1; j <= cnt; j++)
		{
			cin >> peo;
			g[name][peo] ++;//������� 
	    }
	     
	    
	}
	
	for (j = 1; j < 105; j++)
	{
		for (i = 1; i < 105; i++)
		{
			sum[j] += g[i][j];//����ÿ���˱��ἰ�Ĵ��� 
		}
	}
	
	int max = sum[1], maxno = 1;//max��౻�ἰ���Σ� maxno�Ǵ��˵ı�� 
	for (j = 1; j < 105; j++)
	{
		if(sum[j] > max)
		{
			max = sum[j];
			maxno = j;//�ҵ���źʹ��� 
		}
	}
	
	cout << maxno << endl;//������ 
	
	int cnti = 0;//cnti��ʾ�ҵ����һ���ἰ������ 
	
	for (i = 1; i < 105; i++)
	{
	
		if(g[i][maxno] != 0)
		{
			cnti = i;//������ἰ�����˵ı�� 
		}
	}
	
	
	for(i = 1; i < cnti; i++)
	{
		if(g[i][maxno] != 0)
		{
			cout << i << " " ;//�����������ἰ�����˵ı�żӿո� 
		}
	}
	
	cout << cnti;//�������ἰ�����˵ı��
	
	return 0; 
} 
