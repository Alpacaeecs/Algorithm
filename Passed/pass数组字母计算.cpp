//行程长度代码
//1800012784 刘鹏
//10.26 
/*第一次调tab  ==  8 ；不太和谐， 求包容*/ 
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
		string s;//建立字符串 
		char c = 'a';//字符首位为a，防止直接结束 
		int num = 0;//num为总字符数 
		while(((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))//前面一段是ascii的小写，后面是大写 
		{
			s += c;//补在字符串上 
			c = getchar();//打入字符 
			num++;//计入数目 
		}
		
		num = num - 1;//调整 
		int alp[1000] = {0};//alphabet是大写字母的次数 
		
		c = s[1];//第一个字母 
		
		if(c >= 97) alp[c - 32]++;//小写则对应的大写++ 
		if(c <= 90) alp[c] ++;//大写++ 
		
		for(int i = 2; i <= num; i++)
		{
			       c = s[i];
			      
			       if(c >= 97 && (s[i - 1] == c || s[i - 1] == (c - 32)))//小写，且和前一个是一个字母 
			       {
			      		alp[c - 32]++;//大写++ 
			       }
			      
			      if(c >= 97 && !(s[i - 1] == c || s[i - 1] == (c - 32)))//小写，新字母 
			      {
			                alp[c - 32]++;//新字母大写++ 
			                
					if(s[i - 1] >= 97)//上一个字母小写 
					{
						cout << "(" << (char)(s[i - 1] - 32) << "," << alp[s[i - 1] - 32] << ")";//转换成大写输出 
						alp[s[i - 1] - 32] = 0;//清空对应字母 
			                }
					
					if(s[i - 1] <= 90) 
					{
				        	cout << "(" << (char)(s[i - 1]) << "," << alp[s[i - 1]] << ")";
					 	alp[s[i - 1]] = 0;//清空 
				        }
			      }
			      //下面大写，同理 
			      if(c <= 90 && (s[i - 1] == c || s[i - 1] == (c + 32)))
			      {
			                alp[c]++;
			      }
			      
			      if(c <= 90 && !(s[i - 1] == c || s[i - 1] == (c + 32)))
			      {
			                alp[c]++;
			                
					if(s[i - 1] >= 97)
					{
						cout << "(" << (char)(s[i - 1] - 32) << "," << alp[s[i - 1] - 32] << ")";
						alp[s[i - 1] - 32] = 0;
			                }
					
					if(s[i - 1] <= 90) 
					{
				        	cout << "(" << (char)(s[i - 1]) << "," << alp[s[i - 1]] << ")";
					 	alp[s[i - 1]] = 0;
				        }
			      }
		      	
		}
		
		
		if(s[num] >= 97)//最后一位 
		{
			cout << "(" << (char)(s[num] - 32) << "," << alp[s[num] - 32] << ")" << endl;
			alp[s[num] - 32] = 0;
		}
				
		
		if(s[num] <= 90) 
		{
			cout << "(" << (char)(s[num]) << "," << alp[s[num]] << ")" << endl;
			alp[s[num]] = 0;
		}
		
		return 0; 
}
