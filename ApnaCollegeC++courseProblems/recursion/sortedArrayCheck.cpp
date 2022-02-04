// Check if array is sorted or not
#include<iostream>
using namespace std;
bool sorted(int arr[], int n)
{
	if(n==1) return true;
	bool sortRem = sorted(arr+1,n-1);
	return (arr[0] < arr[1]) && sortRem ; 
}
int main()
{
	int arr[] = {1 , 2 , 3 ,4};
	cout << sorted(arr , 4);
	return 0;
}
/*
Approach:-
 - at first we will compare 0th and 1th elements manually and we will check rest of the elements by recursion and we will check both of the consitions whether they are true or false
- if both the conditions are true then our array is sorted otherwise false . like , return arr[0]<arr[1] && sorted(arr+1 , n-1)

*/