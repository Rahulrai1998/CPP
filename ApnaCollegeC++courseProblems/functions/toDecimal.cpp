#include<iostream>
using namespace std;
int binaryToDecimal(int n)
{
	int sum = 0 , x = 1 , last; 
	while(n>0)
	{
		last = n%10;
		sum+= x*last ; 
		x*=2;
		n/=10;
	}
	return sum ; 	
}
int octalToDecimal(int n)
{
	int sum = 0 , x = 1 , last; 
	while(n>0)
	{
		last = n%10;
		sum+= x*last ; 
		x*=8;
		n/=10;
	}
	return sum ; 
	
}
int hexaToDecimal(string s)
{
	int sum = 0 , x = 1 , i , length;
	length = s.size();
	for(i=length-1 ; i>=0 ; i--)
	{
		if(s[i]>='0' and s[i]<='9') sum+=x*(s[i]-'0');
		else if(s[i]>='A' and s[i]<='F') sum+=x*(s[i]-'A' + 10);
		x*=16 ;
	}
	 
	return sum ; 	 
}
int main()
{	
	cout << hexaToDecimal("1CF");
	return 0;
}