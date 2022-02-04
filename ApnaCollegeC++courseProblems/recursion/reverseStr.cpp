// Reverse a string using recursion
// It's left to write user-defined substr() function
#include<iostream>
#include<string>
using namespace std;
void reverse(string s)
{
	if(s.length() == 0) return ;
	string ros = s.substr(1);
	reverse(ros);
	cout << s[0] << " " ; 
	return;	
}
int main()
{
	reverse("Hello");
	return 0;
}
/*
substr(n) is an STL function , which returns substring after starting from n index .  
Approach:-
- By keeping first character aside we will make a recursive call for the rest charcaters in the string untill the size of the string gets 0(base-case). 
- And when the recursion will roll back we will print the first character of the string present in that frame

*/