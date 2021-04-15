// Find the maximum and minimum element in an array

#include<bits/stdc++.h>
using namespace std ;

//to return multiple values we need to use structure 
typedef struct pair{
	int max , min ; 
}pr;
pr getMinMax(int *  , int);
int main()
{
	int n , i; 
	pr ret ; 
	cout << "Enter the size of the array = ";
	cin >> n ; 
	int arr[n];
	for(i=0;i<n;i++)
		cin >> arr[i] ; 
	ret = getMinMax(arr,n);
	cout << ret.max << " is the maximum and "<<ret.min << " is the minimum element "<< endl ; 
	return 0;
}
pr getMinMax(int * arr , int n)
{
	pr minmax ; 
	int i ; 
	if(n==1)
	{
		minmax.max = minmax.min = arr[0];
		return minmax ;  
	}
	if(arr[0] > arr[1])
	{
		minmax.max = arr[0];
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1];
		minmax.min = arr[0];
	}
	for(i=2;i<n;i++)
	{
		if(arr[i] > minmax.max)
			minmax.max = arr[i];
		else if(arr[i]<minmax.min)
			minmax.min = arr[i];
	}
	return minmax ; 
}
/*
Time-complexity of getMinMax() = O(n)
Approach :-
1 .  Since , we have to return two values from a function , we are gonna use a structure with the values grabbed inside it . 
2 . Now , if there is only one element in the array , then we will initialize the max and min value with only element present there . 
3 . Otherwise , we will compare in first two elements of the array and accordingly we will assign the max and min value . 
4 . Then , from the 3rd element , we will compare each element , with the already initialized max and min values and then change them accordingly . 
5 . Finally , we will return the modified struct element  

*/