// Get maximum subarrays

#include<iostream>
using namespace std;

int main()
{
	int n , i , j , sum ,maxsum=0 ;
	cin >> n ; 
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];

	for(i=0;i<n;i++)
	{
		sum = 0 ; 
		for(j=i;j<n;j++)
		{
			sum+=a[j] ; 
			maxsum = max(maxsum , sum);
			
		}
	}
	cout << maxsum ;

	return 0;
}