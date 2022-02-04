// Bubble Sort
#include<bits/stdc++.h>
using namespace std ; 
void display(int*,int);
void bubbleSort(int* , int);
void bubbleOpt(int *a , int n) // Optimized technique , as if the array would be already sorted then it won't make further outer iteartion after first one
{
	int count = 1 , i ,temp , swapped;
	while(count < n)
	{
		swapped = 0 ; 
		for(i = 0 ; i < n-1 ; i++)
		{
			if(a[i] > a[i+1])
			{
				temp = a[i] ; 
				a[i] = a[i+1];
				a[i+1] = temp ;
				swapped = 1 ; 
 			}
		}
		if(swapped == 0) {
			cout << "Already Sorted" <<endl;
			break ;} 
		count++;
	} 
	return;
}
int main()
{
	int n ; 
	cout << "Enter the length = " ;
	cin >> n ; 
	int arr[n] ; 
	for(int i = 0 ; i < n ; i++) cin >> arr[i] ; 
	display(arr , n);
	bubbleOpt(arr , n);
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
void bubbleSort(int *a , int n)
{
	int count = 1 , i ,temp;
	while(count < n)
	{
		for(i = 0 ; i < n-1 ; i++)
		{
			if(a[i] > a[i+1])
			{
				temp = a[i] ; 
				a[i] = a[i+1];
				a[i+1] = temp ; 
			}
		}
		count++;
	} 
	return;
}