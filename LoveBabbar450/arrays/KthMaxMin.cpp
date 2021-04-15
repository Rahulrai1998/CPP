// Find the Kth max and min element of an array

#include<bits/stdc++.h>
using namespace std ; 
void getKthMin(int * , int , int) ; 

int main()
{
	int k ,  n , i ; 
	cout << "Enter the number of array-elements = " ;
	cin >> n ; 
	int arr[n] ; 
	for(i=0;i<n;i++)
		cin >> arr[i] ; 
	cout << "Enter the K = " ; 
	cin >> k ; 
	getKthMin(arr , n , k);
	return 0 ; 
}
void getKthMin(int * arr , int n , int k)
{
	sort(arr , arr+n);
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " "; 
	cout << k << "th min = " << arr[k-1] << endl; 
	cout << k << "th max = " << arr[n-k]; 
	return ; 
}

/*
Time-complexity getKthMin() : O(n)
Approach :-
- In the function , we will first sort the by calling sort() STL function . 
- And then we will get the Kth max and min accordingly

*/