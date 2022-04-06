#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n)
{
	int sum = 0 , x = 1 , firstQ; 
	while(x<=n)
		x*=2 ; 
	if(x>n)
		x/=2;
	while(x>0)
	{
		firstQ = n/x;
		n-=firstQ*x;
		x/=2;
		sum = sum*10 + firstQ;
	}
	return sum ; 
}
int decimalToOctal(int n)
{
	int sum = 0 , x = 1 , firstQ; 
	while(x<=n)
		x*=8 ; 
	if(x>n)
		x/=8;
	while(x>0)
	{
		firstQ = n/x;
		n-=firstQ*x;
		x/=8;
		sum = sum*10 + firstQ;
	}
	return sum ; 
}
string decimalToHexa(int n)
{
	int x = 1 , firstQ; 
	char c ; 
	string ans = "";
	while(x<=n)
		x*=16 ; 
	x/=16;
	while(x>0)
	{
		firstQ = n/x ; 
		n-=x*firstQ;
		x/=16;
		if(firstQ<=9) ans =  ans + to_string(firstQ);
		else
		{
			c = 'A' + firstQ - 10 ; 
			ans.push_back(c);
		}
		
	}
	return ans;

}
int main()
{
	cout << decimalToHexa(111);

	return 0 ;
}