// Print upto n numbers in decreasing and increasing both
#include<iostream>
using namespace std;
void decrease(int n)
{
	if(n==1)
	{cout << 1 <<endl;
	return;}
	cout << n << endl;
	decrease(n-1);
	return;
}
void increase(int n){
	if(n==0) return;
	increase(n-1);
	cout << n << endl;
	return;
}
int main()
{
	
	decrease(5);cout<<endl;
	increase(5);
	return 0;
}