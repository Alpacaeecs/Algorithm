#include <iostream>
using namespace std;

int map[205][205] = {{0}};
int sit[205][205] = {{0}};

void water(int i, int j, int bi, int bj)
{
	if(sit[i][j] == 1) return;
	else
	{
		sit[i][j] = 1;
		map[i][j] = map[bi][bj];
		
		if(map[i - 1][j] <= map[i][j]) water(i - 1, j, bi, bj);
		if(map[i + 1][j] <= map[i][j]) water(i + 1, j, bi, bj);
		if(map[i][j - 1] <= map[i][j]) water(i, j - 1, bi, bj);
		if(map[i][j + 1] <= map[i][j]) water(i, j + 1, bi, bj);
		
	}
	
		 
	
}

int main()
{
	int l, n;
	cin >> n;
	for(l = 1; l <= n; l++)
	{
		int row, col, i, j;
		cin >> row >> col;
		
		for(i = 1; i <= row; i++)
		      for(j = 1; j <= col; j++)
		      	    cin >> map[i][j];
		      	    
       	        for(i = 1; i <= row; i++)
		      for(j = 1; j <= col; j++)
		      	    sit[i][j] = 0;
		      	    
                for(i = 0; i <= col + 1; i++) map[0][i] = 2100, sit[0][i] = 1;
                for(i = 0; i <= col + 1; i++) map[row + 1][i] = 2100, sit[row + 1][i] = 1;
                for(i = 0; i <= row + 1; i++) map[i][0] = 2100, sit[i][0] = 1;
                for(i = 0; i <= row + 1; i++) map[i][col + 1] = 2100, sit[i][col + 1] = 1;
                
                int headi, headj;
                cin >> headi >> headj;
                
                int point, k;
                cin >> point;
                
                for(k = 1; k <= point; k++)
                {
                	int e, r;
                	cin >> e >> r;
                	
                	water(e, r, e, r);
                	
		}
		
		if(sit[headi][headj] == 1) cout << "Yes" << endl;
		else cout << "No" << endl;
                
                
	}
}

