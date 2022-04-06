#include<iostream>
using namespace std;
int getFactorial(int n)
{
	int i,fact=1;
	for(i=2;i<=n;i++) fact*=i;
	return fact;
}
int main()
{
	int n , r , comb;
	cin >> n >> r;
	comb = getFactorial(n)/(getFactorial(n-r)*getFactorial(r));
	cout << comb << endl;
	return 0;
}