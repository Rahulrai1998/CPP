// Check if the number is power of two
#include<iostream>
using namespace std;

bool ifPowerTwo(int n)
{
	return (n && !(n & n-1));

}
int main()
{

	cout << ifPowerTwo(16) << endl;
	cout << ifPowerTwo(32) ; 
	return 0;
}
