//It is a pattern in which , term(i,j) = iCj
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 4 4 1

#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0) return 1;
 	return n*fact(n-1);
}
int main()
{
	int i , j , ans ; 
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++) {cout << (fact(i))/(fact(j)*fact(i-j)) << " ";}
		cout <<endl;
	}
	return 0;
}