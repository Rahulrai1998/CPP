//Reverse array
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int * , int);
int main()
{
	int n , i; 
	cout << "Enter the number of array elements = ";
	cin >> n ; 
	int arr[n] ; 
	cout << "Enter the elements of the array = " ;
	for(i = 0;i < n ; i++)
		cin >> arr[i];
	reverseArray(arr , n);
	cout << "After reversing = ";
	for(i=0;i<n;i++)
		cout << arr[i] << " "; 
	return 0 ;
}
void reverseArray(int *arr , int size)
{
	int i,temp , j;
	j = size-1; 
	for(i = 0 ; i < size/2 ; i++)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp ; 
		j--;
	}
	return ; 
}
/*
Time-complexity of reverseArray() : O(n)
*/