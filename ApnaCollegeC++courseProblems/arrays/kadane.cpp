// Get maximum subarrays using Kadane's algo
// complexity : O(n)

#include<iostream>
using namespace std;

int main()
{
	int n , i , j , currsum = 0 ,maxSum = INT_MIN;
	cin >> n ; 
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];

	for(i=0;i<n;i++)
	{
		currsum+=a[i];
		if(currsum<0) currsum=0;
		maxSum = max(maxSum , currsum);
		
	}
	cout << maxSum ;

	return 0;
}