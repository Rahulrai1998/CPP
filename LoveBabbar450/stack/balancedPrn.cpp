#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string);
int main()
{
	if(isBalanced("[]{([])}")) cout << "Balanced" << endl;
	else cout << "Unbalanced" << endl;
	return 0;
}	
bool isBalanced(string s)
{
	stack<char> stk ;
	for(int i = 0 ; i<s.length();i++)
	{
		if(s[i]=='[' or s[i]=='{' or s[i]=='(') stk.push(s[i]);
		else
		{
			if(s[i]==')')
			{
				if(!stk.empty() and stk.top() == '(') stk.pop() ; 
				else return false ; 
			}
			else if(s[i]=='}')
			{
				if(!stk.empty() and stk.top() == '{') stk.pop();
				else return false;
			}
			else
			{
				if(!stk.empty() and stk.top() == '[') stk.pop();
				else return false;
			}
		}
	} 
	if(!stk.empty()) return false ; 
	return true ; 
}

/*
Time-complexity : O(n)  n = lenght of the string
Approach :-
- Declare a stack and Traverse the string 
- If the current character is a starting bracket( '{' , '[' , '(' ) then push it to the stack 
- If the current character is closing brackets then check if the top of stack is the corresponding opening bracket or  not . If , the top is starting bracket then pop out the current top , else return false . 
- After the complete traversal if there are some starting brackets left in the stack then return false as it would be unbalanced . 

*/
