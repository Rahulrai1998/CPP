// Get maximum frequency character

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "aabbbcdddwwwww";
	int freq[26];
	int i , maxFreq = 0;

	for(i=0;i<26;i++)
		freq[i] = 0;
	for(i=0;i<s.length();i++)
		freq[s[i] - 'a']++;

	char ans = 'a';

	for(i=0;i<26;i++)
	{
		if(freq[i]>maxFreq)
		{
			maxFreq = freq[i];
			ans = i+'a';
		}
	}

	cout << ans << " : " << maxFreq; 
	return 0;
}
