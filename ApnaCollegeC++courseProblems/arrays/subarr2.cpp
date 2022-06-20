//SUB -Array with given SUM

#include<iostream>
using namespace std;
int main()
{
	int n , i  , j , sum , s;
	cout << "Enter the number of elements = "; 
	cin >> n >> s; 
	int arr[n] ; 
	for(i=0 ; i<n;i++)
		cin >> arr[i] ; 

	
	// BRUTE FORCE :  O(n^2)
	/*for(i=0;i<n;i++)
	{
		sum = 0 ; 
		for(j = i ; j < n ; j++)
		{
			sum+=arr[j] ; 
			if(sum == s)
			{
				cout << i << " " << j << endl ; 
 
			}	
		}
	}*/

	//OPTIMISED : TWO-POINTERS APPROACH , O(n)
	int l = 0 , k = 0 ;
	sum = 0 ; 
	while(k<n && sum + arr[k] <= s)
	{
		sum+=arr[k];
		k++;
				
	}
	if(sum==s) {
		cout << l << " " << k <<endl ;
		return 0;
	} 
	while(k<n)
	{
		
		while(sum>s)
		{
			sum-=arr[l];
			l++;
		}
		if(sum==s)
		{
			cout << l << " " << k << endl;
			break;
		}
		sum+=arr[k];
		j++;
	}
	


	return 0;
}