#include<iostream>
using namespace std;

void palindrome(char arr[] ,int n)
{
	for(int i = 0 ; i<n ; i++)
	{
		if(arr[i] != arr[n-1-i])
		{
			cout << "Not a palindrome" << endl ; 
			return;
		}
	}
	cout << "palindrome" << endl;
	return;


}


int main()
{
	int n ; 
	cin >> n;
	char arr[n];
	cin >> arr ; 
	
	palindrome(arr , n);


	return 0;
}
