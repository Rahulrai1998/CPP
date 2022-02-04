// Second function not clear
// Find the index of first and last occurence of a number in an array
#include<iostream>
using namespace std;
int first(int a[] , int i , int key , int n)
{
	if(i==n) return -1;
	if(a[i] == key) return i ;
	return first(a , i+1 , key , n);
}
int last(int a[] , int i , int key , int n)
{
	if(i==n) return -1;	/*int temp =*/ 
	last(a , i+1 , key , n);
	//if(temp != -1) return temp ; 
	if(a[i]==key) return i ; 
	return -1;
}
int main()
{
	int arr[]= {1 , 8 , 3 , 5 , 2};
	cout << last(arr , 0 , 5 , 5);

	return 0;
}