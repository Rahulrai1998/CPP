// Reversing the sentence using STL

#include<iostream>
#include<stack>
using namespace std;
void reverseSentence(string);
int main()
{
	string s = "Maar deham sata ke loha garam baa"; 
	reverseSentence(s);	
	return 0;
}
void reverseSentence(string s)
{
	stack<string> st ;
	for(int i = 0 ; i < s.length() ; i++)
	{
		string word = "";
		while(s[i]!=' ' && i < s.length())
		{
			word = word + s[i] ; 
			i++ ; 
		}
		st.push(word) ;
	}
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();e
	} 
	cout << endl ;
	return;
}
/*
Approach:-
- By using STL , we will create an empty stack ; 
- we will traverse the sentence through each characters and add the characters into a temporary variable until a space gets found and then push it to the stack
- Repeat the above step till all the words pushed in 
- Print and pop out the words from the stack untill it gets empty which will be in reverse order . 
Time complexity of reverseSentence : O(n^2)

HEAD TO GFG FOR MORE OPTIMIZATION
*/