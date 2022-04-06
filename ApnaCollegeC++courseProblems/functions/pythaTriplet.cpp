#include<iostream>
using namespace std;

bool isPythaTriplet(int x , int y , int z)
{
	int a  = max(x , max(y,z)), b ,c ;
	if(a==x)
	{
		b = y ; 
		c = z;
	}
	else if(a==y)
	{
		b = x;
		c = z ;  
	}
	else
	{
		b = x ; 
		c = y;
	}
	if((a*a)==(b*b)+(c*c));
		return true;
	return false;
}
int main()
{
	cout << isPythaTriplet(3,4,5)<<endl;
	return 0;
}