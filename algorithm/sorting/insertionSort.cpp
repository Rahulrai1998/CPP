//Insertion Sort

#include<iostream>
using namespace std ; 

void insertionSort(int arr[] , int n);

int main()
{
	int n ; 
	cout << "Enter the number of elements = ";
	cin >> n ; 
	int arr[n];
	cout << "Enter the elements = " ; 
	for(int i = 0 ; i <n ; i++)
		cin >> arr[i] ; 
	insertionSort(arr , n);
	return 0 ;  

}
void insertionSort(int arr[] , int n)
{
	int current , pcurrent ; 
	cout << "Your array before sorting = " ; 
	for(int j = 0 ; j < n ; j++)
		cout << arr[j] << " " ;
	cout << endl ; 
	for(int i = 1 ; i < n ; i++)
	{
		current = arr[i] ; 
		pcurrent = i-1 ; 
		while(arr[pcurrent] > current && pcurrent >= 0 )
		{
			
			arr[pcurrent + 1] = arr[pcurrent] ; 
			pcurrent-- ; 
		}
		arr[pcurrent + 1] = current ; 
		
	}
	cout << "Your array after sorting = " ; 
	for(int j = 0 ; j < n ; j++)
		cout << arr[j] << " " ;

}