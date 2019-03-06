#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

union val//共用体，存储数组 
{
	double numdouble;
	char sign;
}str_val[200] = {0};

struct ary//结构体，变量数组（倒序名字） 
{
	string name;
	double valu;
}arr[200] = {{}, {"ip", 3.1415926535}, {"e", 2.7182818284}};



string str;//源数组 
int exstr[200] = {0};//标记数组 
int pp;//处理指针（倒走） 
int arrnum = 2;//现有变量 

const int add = 1, minu = 2, muti = 3, divi = 4, lb = 5, rb = 6, ls = 7, rs = 8;//基本常量 

int get_the_str()//读入 
{
	getline(cin, str);
	int len = str.length();
	
	return len;
}

double expression(); 



double prim()
{	
	if(exstr[pp] == 0)
	{
		 
		pp--;
		return str_val[pp + 1].numdouble;
	}
	
	if(exstr[pp] == lb) 
	{
		 
		pp--;
		return expression();
	}
	
	if(exstr[pp] == ls)
	{
		 
		pp--;
	 	return expression();
	}
	
	
}
double term()
{
	double d = prim();
	
	if(exstr[pp] == muti)
	{
		 
		pp--;
		return d * term();
	}
	
	if(exstr[pp] == divi)
	{
		 
		pp--;
		return d / term();
	}
	
	if(exstr[pp] == rs || exstr[pp] == rb)//退出‘）’ 
	{
		 
		pp--;
	}
	
	return d;
}
double expression()
{
	double d = term();
	
	if(exstr[pp] == add)
	{
		 
		pp--;
		return d + expression();
	}
	
	if(exstr[pp] == minu)
	{
		 
		pp--;
		return d - expression();
	}
	
	
	return d;
}
int sel()//判断函数 
{
	char c = cin.peek();
	
	if(c == 'l') return 1;
	
	if(c == 'q') return 2;
	
	return 3;
}
int process()
{
	int peek = sel();
	if(peek == 1)
	{
		
		arrnum++;
		char a[100], b;
		cin >> a;
		cin >> arr[arrnum].name;
		cin >> b;
		double af;
		
		
		cin >> str;
		int len = str.length();
		
		int cnt = 0, num = 0, flag = 0, v = 0;
		double flo = 0;//cnt记录位数， num记录已有的数据个数， flag是小数点记录 
		string vname;
		for(int i = len - 1; i >= 0; i--)
		{
			if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			{
				if(v == 0) num++;
				v = 1;
				vname = vname + str[i];
				
			}
			else if(str[i] >= '0' && str[i] <= '9')
			{
				
				if(cnt == 0 && !flag) num++;
				
				flo += (str[i] - '0') * pow(10, cnt);
				
				cnt++;
				
				
			}
			else if(str[i] == '.')
			{
				flag = 1;
				flo = flo * pow(10, -cnt);
				cnt = 0;
			}
			else
			{
				if(cnt != 0) 
				{
					str_val[num].numdouble = flo;
					flo = 0;
					cnt = 0;
					flag = 0; 
					exstr[num] = 0;
				}
				
				if(v != 0)
				{
					
					for(int j = 1; j <= arrnum; j++) 
						if(arr[j].name == vname)
						{
							str_val[num].numdouble = arr[j].valu;
							v = 0;
							vname = "";
							exstr[num] = 0;
							break;
						}
				}
				
				num++;
				switch(str[i])
				{
					case '+': exstr[num] = add; break;
					case '-': exstr[num] = minu; break;
					case '*': exstr[num] = muti; break;
					case '/': exstr[num] = divi; break;
					case '{': exstr[num] = lb; break;
					case '}': exstr[num] = rb; break;
					case '(': exstr[num] = ls; break;
					case ')': exstr[num] = rs; break;
					
						
					
				}
				str_val[num].sign = str[i];
			}
		}
		
		if(cnt != 0)
		{
			str_val[num].numdouble = flo;
			flo = 0;
			cnt = 0;
			flag = 0; 
			
		}
		if(v != 0)
		{
			for(int j = 1; j <= arrnum; j++) 
					if(arr[j].name == vname)
					{
						str_val[num].numdouble = arr[j].valu;
						v = 0;
						vname = "";
						exstr[num] = 0;
						break;
					}
		}
		
		pp = num;
		
		
		af = expression();
		
		memset(str_val, 0, sizeof(str_val));
		memset(exstr, 0, sizeof(exstr));
		str = "";
		
		arr[arrnum].valu = af;
		
		
		len = arr[arrnum].name.length();
		for (int i = 0; i < len / 2; i++)
		{
			//前后交换

			char temp = arr[arrnum].name[i];
			
			arr[arrnum].name[i] = arr[arrnum].name[len - i - 1];
			
			arr[arrnum].name[len - i - 1] = temp;
		}
	
		cin.get();
		
		return 1;
		
	}
	
	else if (peek == 3)
	{
		int len = get_the_str();
		int cnt = 0, num = 0, flag = 0, v = 0;
		double flo = 0;//cnt记录位数， num记录已有的数据个数， flag是小数点记录 
		string vname;
		for(int i = len - 1; i >= 0; i--)
		{
			if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			{
				if(v == 0) num++;
				v = 1;
				vname = vname + str[i];
				
			}
			else if(str[i] >= '0' && str[i] <= '9')
			{
				
				if(cnt == 0 && !flag) num++;
				
				flo += (str[i] - '0') * pow(10, cnt);
				
				cnt++;
				
				
			}
			else if(str[i] == '.')
			{
				flag = 1;
				flo = flo * pow(10, -cnt);
				cnt = 0;
			}
			else
			{
				if(cnt != 0) 
				{
					str_val[num].numdouble = flo;
					flo = 0;
					cnt = 0;
					flag = 0; 
					exstr[num] = 0;
				}
				
				if(v != 0)
				{
					
					for(int j = 1; j <= arrnum; j++) 
						if(arr[j].name == vname)
						{
							str_val[num].numdouble = arr[j].valu;
							v = 0;
							vname = "";
							exstr[num] = 0;
							break;
						}
				}
				
				num++;
				switch(str[i])
				{
					case '+': exstr[num] = add; break;
					case '-': exstr[num] = minu; break;
					case '*': exstr[num] = muti; break;
					case '/': exstr[num] = divi; break;
					case '{': exstr[num] = lb; break;
					case '}': exstr[num] = rb; break;
					case '(': exstr[num] = ls; break;
					case ')': exstr[num] = rs; break;
					
						
					
				}
				str_val[num].sign = str[i];
			}
		}
		
		if(cnt != 0)
		{
			str_val[num].numdouble = flo;
			flo = 0;
			cnt = 0;
			flag = 0; 
			
		}
		if(v != 0)
		{
			for(int j = 1; j <= arrnum; j++) 
					if(arr[j].name == vname)
					{
						str_val[num].numdouble = arr[j].valu;
						v = 0;
						vname = "";
						exstr[num] = 0;
						break;
					}
		}
		
		pp = num;
	
		return 2;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	int s = process();
	while(s > 0)
	{
		double final = expression();
		if(s == 2) cout << fixed << setprecision(6) << final << endl;
		memset(str_val, 0, sizeof(str_val));
		memset(exstr, 0, sizeof(exstr));
		str = "";
		s = process();
	}
	
	

	
	
	
	return 0;
}
