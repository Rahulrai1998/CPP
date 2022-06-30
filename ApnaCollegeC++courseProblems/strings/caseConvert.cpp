// upper to lower and vice-versa

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int i;
	string s = "helloboyiii";

	for(i=0;i<s.size();i++)
	{
		if(s[i]>='a' and s[i]<='z')
			s[i]-= 32;
	}
	cout << s << endl;

	for(i=0 ; i<s.size() ;i++)
	{
		if(s[i] >= 'A' and s[i] <= 'Z')
			s[i]+=32;
	}
	cout << s << endl;

	return 0;
}
