// Print all the permutations of a string
#include<iostream>
using namespace std;
void getPermu(string s , string ans)
{
	if(s.length() == 0)
	{
		cout << ans << endl;
		return;
	}
	int i;
	for(i = 0;i<s.length();i++)
	{
		char a = s[i];
		string ros = s.substr(0 , i) + s.substr(i+1);
		getPermu(ros , ans+a);
	}
}
int main()
{
	getPermu("ABC","");
	return 0;
}