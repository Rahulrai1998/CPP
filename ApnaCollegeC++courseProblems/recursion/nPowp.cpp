// Get n raised to the power p  using recursion
#include<iostream>
using namespace std;
int getNrP(int n , int p)
{
	if(p==0) return 1;
	return n * getNrP(n , p-1);
}
int main()
{
	cout << getNrP(2 , 3) ; 
	return 0 ;
}