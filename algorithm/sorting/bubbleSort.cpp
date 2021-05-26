// Bubble Sort
#include<bits/stdc++.h>
using namespace std ; 
void display(int*,int);
int main()
{
	int n ; 
	cout << "Enter the length = " ;
	cin >> n ; 
	int arr[n] ; 
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i] ; 
	} 
	display(arr , n);
	return 0 ; 
}
void display(int *a , int n)
{
	int i ; 
	for(i=0; i <n ; i++)
	{
		cout << a[i] << " " ;
	}
	cout << endl ; 
	return ; 
}