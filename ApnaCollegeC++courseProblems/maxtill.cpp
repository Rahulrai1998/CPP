//Max till i
//Given an array a[] of size n . For every i from 0 to n-1 output max(a[0],a[1],...a[i])
//Property of this question is non-decreasing . 

/*
 Approach:-
- a variable mx will be initialized with minimum/first-element of the array
-  iterate over the array 
- mx will store the maximum value till ith element and will update 

time-complexity = O(n) {single-loop}
*/

#include<iostream>
#include<algorithm>
using namespace std ; 
int main()
{
	int i , n , mx;
	cout <<  "Enter the number of elements = " ;
	cin >> n ; 
	int arr[n] ;
	for(i=0;i<n;i++)
		cin >> arr[i] ;  
	mx = arr[0] ; 
	for(i=0 ;i<n;i++)
	{
		mx = max(mx , arr[i]);
		cout << mx << endl ; 
	}
	return 0 ; 
}