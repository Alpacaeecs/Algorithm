#include <iostream>
using namespace std;

int a[105][105] = {{0}};//全局数组 

void arry(int i, int j)//蔓延查找函数 
{
	a[i][j] = 0;//找到的那个细菌处理掉 
	
	if(a[i - 1][j] == 1 || a[i][j - 1] == 1 || a[i][j + 1] == 1 || a[i + 1][j] == 1)//周围还有 
	{
	       	if(a[i - 1][j] == 1)
	       	{
	       	       	arry(i - 1, j);//向另一侧蔓延 
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
	else return;//周围没了 
} 

int main()
{
	int c, d, i, j, sum = 0;//c、d是行和列数目； sum是菌落数 
	cin >> c >> d;
	
	for(i = 1; i <= c; i++)
	      for(j = 1; j <= d; j++)
		    cin >> a[i][j];//读入 
		
	for(i = 1; i <= c; i++)
	      for(j = 1; j <= d; j++)
 	      	    if(a[i][j] == 1)//找到细菌 
 	      	    {
	     	           arry(i, j);//安排他 
     	                   sum ++;//菌落++ 
	            }
		    
		    
		    
        cout << sum << endl; 
        
        return 0; 
}
