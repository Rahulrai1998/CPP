#include<iostream>
using namespace std ; 
int linearSearch(int* , int , int);
int main()
{
	int n , i , got , key; 
	cout << "Enter the number of elements = " ;
	cin >> n ; 
	int arr[n] ; 
	for(i=0;i<n;i++)
		cin >> arr[i] ; 
	cout << "Enter the element to search = ";
	cin >> key ; 
	got = linearSearch(arr , key , n); 	
	if(got!= -1)
		cout << key << " is at " << got << endl ; 
	return 0 ; 
}
int linearSearch(int * a , int key , int n)
{
	int i ; 
	for(i=0; i < n ; i++)
	{
		if(a[i]==key)
			return i ; 
	}
	return -1 ; 
}