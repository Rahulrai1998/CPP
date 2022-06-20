#include<iostream>
#include<algorithm>
using namespace std;

// BRUTE FORCE : O(n^2)
bool pairSum(int a[] , int n , int k)
{
        int i , j ;
        for(i=0;i<n-1;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(a[i]+a[j] == k)
                        {
                                cout << i << " " << j << endl;
                                return true;
                        }
                }
        }

        return false;

}

//OPTIMISED : O(n)
bool pairSumOpt(int a[] , int n , int k)
{
	sort(a , a+n);
	int low = 0 , high = n-1 ; 
	while(low < high)
	{
		if(a[high] + a[low] == k)
		{
			cout << low << " " << high << endl;
			return true;
	
		}
		else if(a[high] + a[low] >k) high--;
		else low++ ; 
	}
	return false;


}

int main()
{
        int i , n , k;
        cin >> n >> k;
        int a[n];
        for(i=0;i<n ; i++)
                cin >> a[i] ;
        cout << pairSumOpt(a,n,k) << endl;

        return 0;

}


