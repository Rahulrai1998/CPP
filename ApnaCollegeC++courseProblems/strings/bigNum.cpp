// Form the biggest number from numeric string

#include<iostream> 
#include<string> 
#include<algorithm>
using namespace std;

int main()
{
	string s = "564129";
	sort(s.begin() , s.end() , greater<int>());
	cout << s;


	return 0;
}
