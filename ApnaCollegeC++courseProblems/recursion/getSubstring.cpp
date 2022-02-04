// Generate all substrings of a string
#include<iostream>
using namespace std;
void getSubs(string s , string ans)
{
	if(s.length() == 0)
	{
		cout << ans << endl;
		return;
	}
	char ch = s[0];
	string ros = s.substr(1);
	getSubs(ros , ans);
	getSubs(ros , ans + ch);
}
int main()
{	
	getSubs("ABC","");
	return 0;
}

/*
Total number of substrings of a string having n characters = 2^n
Head to the tutorial video for explanation
*/