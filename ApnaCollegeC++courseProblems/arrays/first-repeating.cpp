//First repeating element 
// 1th-indexing is used 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , i , minIn = INT_MAX ; 
	cin >> n ; 
	int arr[n] ; 
	for(i=0;i<n;i++) cin >> arr[i];
	
	int N = 100 ; 
	int a[N];

	for(i=0 ; i<N ; i++) {a[i] = (-1 );} 
	for(i=0;i<n;i++){

		if( a[arr[i]] != -1) 
			minIn = min(minIn , a[arr[i]]);
		else 
			a[arr[i]] = i ; 
	}
	if(minIn == INT_MAX) 
		cout << -1 << endl ;
	else 
		cout << minIn+1 << endl ; 
	
	return 0;
}

// comlexity : O(N)