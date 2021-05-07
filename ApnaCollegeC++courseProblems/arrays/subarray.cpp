//Sum of each subarrays of an array . 

#include<bits/stdc++.h>
using namespace std ;
void getSubarraySum(int * , int); 
int main()
{
	int n , i;
	cout << "Enter the number of elements = " ; 
	cin >> n ; 
	int arr[n] ; 
	for(i=0 ; i<n;i++)
		cin >> arr[i] ; 
	getSubarraySum(arr , n);  
	return 0 ;
}
void getSubarraySum(int * arr , int n)
{
	int curr , i  , j;
	for(i=0;i<n;i++)
	{
		curr = 0 ; 
		for(j=i;j<n;j++)
		{
			curr+=arr[j];
			cout << curr << endl ; 
		}
	} 
	return ; 

}

/*
Time-complexity of getSubarraySum() =  O(n^2)  
Approach :-
- we will initialize a variable with 0 , to store the sum of subarrays
- then , a loop upto last element will be started , and under first loop we will start another nested loop , which runs from current index upto last element
- under the nested loop , on each iteration we will updated the curr/sum value , by adding the element  and followed by printing the curr
- each sum will be corresponding/will represent to each subarray of the array . 

*/


/*
  Subarrays and Subsequences
	Subarray 
- It is  a contiguous part of array . 
- It is the array inside another array . 
- For example [1,2,3] , subarrays of this array are , [1] , [2] , [3] , [1,2] , [2,3] , [1,2,3]
- Number of subarrays of an array of n-elements = (n C 2) + n = n*(n+1)/2
	Subsequence
- It is a sequence that can be derived from another sequence by 0 or more elements fo an array , without changing the order of the remaining elements .  OR It is an ordered subset of the array's elements having the same sequential ordering as the original array . 
- The elements are not contiguous / consecutive . 
- For example [1,2,3] , subsequences might be  [] , [1,2] , [1,3] , [2,3] , [1,2,3] , [1] , [2] , [3]
- Number of subsequences of an array with n elements = 2^n (out of these one is empty subsequence)
--> Every subarray is a subsequence but every subsequence is not subarray .
 */