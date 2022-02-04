// Get the nth fibonacci number

#include<bits/stdc++.h>
using namespace std;
int fibbo(int n)
{
	if(n==1||n==0) return n; 
	int fibbonacii = fibbo(n-2) + fibbo(n-1);
	return fibbonacii; 
}
int main()
{	
	cout << fibbo(0) <<endl;
	return 0;
}
