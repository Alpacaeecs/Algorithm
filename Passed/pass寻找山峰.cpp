//Ѱ��ɽ��
//1800012784 ����
//10.25
/*�����Ķ�ά��������к�����Ӧ�ÿճ�����������ƽʱ��ϰ�ߣ�������������棬��һ�к͵�һ�еĸ߳�������ճ�0�к�0�о��޷�����ж�*/ 
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct coor//�ṹ������ 
{
	int x;
	int y;
};

bool cmp(coor i, coor j)//����ʽ�ȱ�x�����ٱ�y���� 
{
	return (i.x < j.x) || ((i.x == j.x) && (i.y < j.y));
}

int main ()
{
	int i, j, mat[25][25] = {{0}}, p, q;//i��j���к��У�mat�Ǿ���p��q��ѭ������ 
	cin >> i >> j;
	for(p = 1; p <= i; p++)
	{
		for(q = 1; q <= j; q++)
		{
			cin >> mat[p][q];//������� 
		}
	}
	
	coor c[100];//����100������ 
	int sum, peak = 0;//sum���жϱ����� peak��ɽ����Ŀ 
	
	for(p = 1; p <= i; p++)
	{
		for(q = 1; q <= j; q++)
		{
			sum = (mat[p][q] >= mat[p - 1][q]) + (mat[p][q] >= mat[p + 1][q]) + (mat[p][q] >= mat[p][q + 1]) + (mat[p][q] >= mat[p][q - 1]);//����Χ�ĸ������� 
			if (sum == 4)
			{
				peak ++;//�ҵ�ɽ�� 
				c[peak].x = p - 1;//����x���� 
				c[peak].y = q - 1;//����y���� 
			}
		}
	}
	
	sort(c + 1, c + peak + 1, cmp);//���� 
	
	for(i = 1; i <= peak; i++)
	{
		cout << c[i].x << " " << c[i].y << endl;//�������� 
	}
	
	return 0;
 } 
