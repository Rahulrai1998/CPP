// Get the factorial of n using recursion
#include<iostream>
using namespace std;
int getFact(int n)
{
	if(n==0) return 1;
	return n * getFact(n-1);
}

int main()
{
	cout << getFact(5);
	return 0 ;
}