//�Ĵ�� 
//1800012784 ���� 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int dong, bo, tai, hong, a, b, c, d;
	for (dong = 1; dong <= 4; dong++)
	{
		for (bo = 1; bo <= 4; bo++)
		{
			if (bo == dong)
			{
				continue;
			}
			else
			{
				for (tai = 1; tai <= 4; tai++)
				{
					if(bo == tai||tai == dong)
					{
						continue;
					}
					else
					{
						for (hong = 1; hong <= 4; hong++)
						{
							if(hong == dong||hong == tai||hong == bo)
							{
								continue;
							}
							else//��������������� 
							{
								
								a = (dong == 1) + (bo == 3) + (hong == 4);
								b = (hong == 1) + (dong == 4) + (bo == 2) + (tai == 3);
								c = (hong == 4) + (dong == 3);
								d = (bo == 1) + (tai == 4) + (hong == 2) + (dong == 3);
								if ((a == 1)&&(b == 1)&&(c == 1)&&(d == 1))//�ж� 
								{
									cout << bo << endl;
									cout << dong << endl;
									cout << tai << endl;
									cout << hong << endl;
								}
						
							}
						}
					}
				}
			}
		}
	}
	return 0;
}//�����Ŀ����̫�࣬�Ҿ��������������֮��������������������ˣ�����.jpg 
