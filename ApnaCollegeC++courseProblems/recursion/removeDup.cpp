//Removes all duplicates from the string
#include<iostream>
using namespace std ;
string removeDup(string s)
{
	if(s.length()==0) return "";
	char a = s[0] ; 
	string n = removeDup(s.substr(1));
	if(a == n[0]) return n;
	else return a+n;
} 
int main()
{
	cout << removeDup("xxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	return 0;
}
/*
Approach:-
- we will store the first character in a variable and  will make a recursive call for the rest of the substring until the length gets 0 , to get the repetition removed .
-  We will store the returned string after removing the duplicates in a variable.
- Now , will check if the first character is same as the stored variable or not . If its same then will return the string without the first character else will include the stored character to the string and then will return 
*/