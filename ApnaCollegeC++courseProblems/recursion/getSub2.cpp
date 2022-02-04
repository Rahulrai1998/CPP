// Generate substrings of "AB" alongwith their ASCII values i.e 65 , 66
#include<iostream>
using namespace std;
void getString(string s , string ans)
{
	if(s.length()==0)
	{
		cout << ans << endl ; 
		return;
	}
	char c = s[0];
	int code = c ; // ASCII
	string ros = s.substr(1);
	getString(ros , ans);
	getString(ros , ans+c);
	getString(ros , ans + to_string(c));
}
int main()
{
	getString("AB","");
	return 0;
}
/*
to_string(int) converts an integer to string
head to the tutorial for the explanation
*/