#include<iostream>
using namespace std;

int main()
{
	int m ,n , i ,j ; 
	cin >> m >> n;
	int a[m][n];

	for(int i=0 ; i<m;i++)
	{
		for(int j = 0 ; j <n ; j++)
			{cin >> a[i][j] ; }
	}

	int row_start = 0 , row_end = m-1 , col_start = 0 , col_end = n-1 ; 
	
	while(row_start <= row_end and col_start <= col_end)
	{
		for(i=col_start ; i<= col_end ; i++)
		{
			cout << a[row_start][i]<< " " ; 
		}
		cout << endl;
		row_start++ ; 
		for(i=row_start;i<=row_end;i++)
		{
			cout << a[i][col_end] << " ";
		}
		cout << endl;
		col_end--;
		for(i=col_end ; i>=col_start ; i--)
		{
			cout << a[row_end][i] << " ";
		}
		row_end--;
		cout << endl;
		for(i=row_end;i>=row_start;i--)
		{
			cout << a[i][col_start] << " ";
		}
		cout << endl;
		col_start++ ; 
	}

	

	return 0;
}
