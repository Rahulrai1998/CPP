// Move all x to end of the string
#include<iostream>
using namespace std;
string moveXtoend(string s)
{
	if(s.length()==0) return "";
	char a = s[0];
	string end = moveXtoend(s.substr(1));
	if(a == 'x') return end+a ;
	else return a+end;
}
int main()
{
	cout << moveXtoend("xcfgxxxseexxx") ; 
	return 0;
}
/*
Approach:-
- Will store the first character in a variable and will call a recursive function for rest of the substring untill the length gets 0 . 
- On getting the substring after putting all the x at end we will check if the first stored character is x then will return the string after including x at the end else will return a + returned substring 
*/