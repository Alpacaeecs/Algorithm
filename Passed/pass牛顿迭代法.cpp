//ţ�ٵ����� 
//1800012784 ���� 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	double num, x;//������num��������x 
	int i, f;//��������i��ָ��f 
	while(cin >> num)
	{
		f = 0;//����ָ�� 
		x = 1.0;//��ֵ��ʼֵ 
		for(i = 1; f == 0; i++)//ѭ������ 
		{
		    
			if(x * x - num == 0)//����ж� (����ط���bug����ֵ���ض���1.0������1�Ļ���������2�ˣ� 
		    {
			    cout << i  << " ";
			    f = 1;//ָ�� 
			    cout << fixed << setprecision(2) << x << endl;//��� 
		    }
	
			
			
			x = x - (x * x - num) / (2.0 * x);
	        
			
			
		    if(x * x - num < 1e-6 && f == 0)//����ж� 
		    {
			    cout << i + 1 << " ";
			    f = 1;//ָ�� 
			    cout << fixed << setprecision(2) << x << endl;//��� 
		    }
		    
	    }
		
	
	}
    return 0; 
}
