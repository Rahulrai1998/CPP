// SMALLEST POSITIVE MISSING NUMBER

#include<iostream>
using namespace std;

int main()
{
	int i , n ,  m , ans; 
	cin >> n ; 
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	m = 1e6 + 2 ;
	bool  check[m];
	for(i = 0 ; i < m ; i++)	
		check[i] == false;
	for(i=0;i<n;i++)
	{
		if(a[i] >= 0)
			check[a[i]] = true;
	}
	ans = -1;
	for(i=0;i<m;i++)
	{
		if(check[i] == false) {
			ans = i ; 
			break;
		} 

	}
	cout << ans;


	return 0;
}
