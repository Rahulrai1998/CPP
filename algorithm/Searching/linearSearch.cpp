#include<iostream>
using namespace std ; 
int linearSearch(int* , int , int);
int recLinearSearch(int *a, int s , int e , int key)
{
	if(s>e) return -1 ; 
	if(a[s]==key) return s;
	else if(a[e]==key) return e;
	else return recLinearSearch(a , s+1 , e-1,key);
}
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
	got = recLinearSearch(arr , 0 , n-1 , key); 	
	if(got!= -1) cout << key << " is at " << got << endl ; 
	else cout<<"Not found";
	cout<<1;
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