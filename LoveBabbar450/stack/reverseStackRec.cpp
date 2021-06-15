//Reverse a stack without using an extra stack using recursion

#include<iostream>
#include<stack>
using namespace std ;
void reverse(stack<int > &);
void insertAtBottom(stack<int> &, int topElm); 
int main()
{
	stack<int> st ; 
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	reverse(st);
	while(!st.empty())
	{
		cout << st.top() << endl ; 
		st.pop();
	}cout<<endl;
	return 0 ; 
}
void reverse(stack<int> &st)
{
	if(st.empty()) return ; 
	int topElm = st.top();
	st.pop();
	reverse(st);
	insertAtBottom(st , topElm);
	return;
}
void insertAtBottom(stack<int> &st , int topElm)
{
	if(st.empty())
	{
		st.push(topElm);
		return;
	}
	int elem = st.top();
	st.pop();
	insertAtBottom(st , topElm);
	st.push(elem) ;
	return;  
}
/*
Approach:-
- At first we will store the top element and make a recursive call for the rest stack elements to get reversed  
- after reversing the rest stack we will insert the previously taken out top element into the bottom , with insertAtBottom() function
- In insertAtBottom() function , all the stack items are popped out and stored into the CALL STACK using recursion  , after the stack becomes empty , push the top element in bottom and then push the rest items stored in call stack into the stack . 

Time-Complexity : 
HEAD TO GFG FOR BETTER EXPLANATION AND PROCEDURE and Time-complexity
function call stack - stack frame - getting into control - returning control
 */