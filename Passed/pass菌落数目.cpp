#include <iostream>
using namespace std;

int a[105][105] = {{0}};//ȫ������ 

void arry(int i, int j)//���Ӳ��Һ��� 
{
	a[i][j] = 0;//�ҵ����Ǹ�ϸ������� 
	
	if(a[i - 1][j] == 1 || a[i][j - 1] == 1 || a[i][j + 1] == 1 || a[i + 1][j] == 1)//��Χ���� 
	{
	       	if(a[i - 1][j] == 1)
	       	{
	       	       	arry(i - 1, j);//����һ������ 
	        }
	        if(a[i + 1][j] == 1)
	       	{
	       	       	arry(i + 1, j);
	        }
	        if(a[i][j + 1] == 1)
	       	{
	       	       	arry(i, j + 1);
	        }
	        if(a[i][j - 1] == 1)
	       	{
	       	       	arry(i, j - 1);
	        }
	}
	else return;//��Χû�� 
} 

int main()
{
	int c, d, i, j, sum = 0;//c��d���к�����Ŀ�� sum�Ǿ����� 
	cin >> c >> d;
	
	for(i = 1; i <= c; i++)
	      for(j = 1; j <= d; j++)
		    cin >> a[i][j];//���� 
		
	for(i = 1; i <= c; i++)
	      for(j = 1; j <= d; j++)
 	      	    if(a[i][j] == 1)//�ҵ�ϸ�� 
 	      	    {
	     	           arry(i, j);//������ 
     	                   sum ++;//����++ 
	            }
		    
		    
		    
        cout << sum << endl; 
        
        return 0; 
}
