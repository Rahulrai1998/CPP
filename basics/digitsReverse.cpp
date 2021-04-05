#include<bits/stdc++.h>
using namespace std ;
void digitsReverse(int); 
int main()
{
	int num;
	cin >> num ;  //take number as input
	digitsReverse(num);
	return 0;
}
void digitsReverse(int n)
{
	int r , sum ;
	sum = 0 ; 
	while(n>0)
	{
		r = n%10 ; 
		sum = sum*10 + r ; 
		n=n/10 ; 
	}
	cout << sum ; // this will give the reversed number
	return ; 
}