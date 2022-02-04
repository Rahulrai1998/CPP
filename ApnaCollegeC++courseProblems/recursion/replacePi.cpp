// Print a string by replacing  "pi" with 3.14 in the given string
#include<iostream>
using namespace std;
void replacePi(string s)
{
	if(s.length()==0) return;
	if(s[0]=='p' && s[1]=='i')
	{
		cout << "3.14" ; 
		replacePi(s.substr(2));
	}
	else{
		cout << s[0] ; 
		replacePi(s.substr(1));
	}
}
int main()
{

	replacePi("pixpolpiyt");
	return 0;
}
/*
Approach:-
- At first check by the first two characters as they are "pi" or ir not , If they are "pi" then we will print them and will a recurcive function for rest of the substring using substr() stl function
- If first two characters are not as above then we will print the first character and will use recursion for the rest of the substring . 

*/