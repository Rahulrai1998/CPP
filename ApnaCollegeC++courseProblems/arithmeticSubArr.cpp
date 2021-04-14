// GOOGLE KICK-START 
// An arithmetic array is an array that contains at least two integers and the differences between consecutive 
// integers are equal
// Finding the length of the longest conitguous ARITHMETIC SUBARRAY in and ARRAY . 

#include<bits/stdc++.h>
using namespace std ; 
int main()
{
	int  n , i ;
	cin >> n ;     //number of array-elements
	int arr[n] ; 
	for(i=0;i<n;i++)
		cin >> arr[i] ; 
	int pd ;         // it holds the previous common-difference
	int  j = 2;      // Since , are already taken the initial common difference , then we will start from j=1 onwards
	pd = arr[1] - arr[0] ;    // initial common-difference
	int curr = 2;      // it holds the length of current arithmetic subarray .
	int ans =2 ;       // it holds the maximum required subarray and is initialized by 2 b/c in arithmetic subarray minimum length is 2 
	while(j<n)
	{
		if(arr[j]-arr[j-1] == pd)
			curr++ ;
		else
		{
			pd = arr[j] - arr[j-1] ; 
			curr = 2 ; 
		}
		ans = max(ans,curr);
		j++ ; 
	}
	cout << "Length of longest Arithmetic subarray  = "<<ans << endl ; 
	return 0; 
}
/*
time-complexity :	O(n)
Approach :-
- We will iterate upto last element of the array
- We will maintain 3 variables , throughout the loop , 
	1 . pd - will store the previous common-difference
	2 . curr - will be initilized by 2 before loop , and will contain the length of current arithmetic subarray . 
	3 . ans - it will also be initialized 2 , and it will contain the length of overall longest arithmetic subarray . 
 - Inside the loop , we will check if the current CD is equal to previous or not , If yes then we will increament the curr by 1  , 
- else , we will update the pd by current CD and will assign curr with 2 , since , the minimum length of the required sub array must be 2
- at last , we will update the ans variable with the maximum of current or previous subarray length . 
*/