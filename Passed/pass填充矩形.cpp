//�������� 
//1800012784 ���� 
// 10.12 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int line, row, blank, i;//����line������row�����blank��ѭ��i 
	char fill;//����ַ�fill 
	while (cin >> line)//����line��ʼ 
	{   
	
	    if(line == 0)
	        break;//�������0��Ҫ���� 
	    else
	    {
	        cin >> row >> fill >> blank;//�������� 
	        for(i = 1; i <= line; i++)
			{
		        if (i == 1 || i == line)
		        {
			        cout << setw(row) << setfill(fill) << fill << endl;//��β���� 
		        }
		        else
		        {
			        if (blank == 1)
			        {
				        cout << setw(row) << setfill(fill) << fill << endl;//���� 
		        	}
			        else
			        {
				        cout << fill << setw(row - 1) << setfill(' ') << fill << endl;//������ 
			        }
			    
		    
		        }
		       
	        }
		}
    }
    
    
    return 0;

}
