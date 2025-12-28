// Implementation of Queue using stack

#include<iostream>
#include<stack>
using namespace std ; 

class queueOne{
	stack<int> s1 ; stack<int>s2 ; 
	public:
	void push(int n) {s1.push(n); return;}
	int pop()
	{
		if(s1.empty() && s2.empty()) return -1;
		if(s2.empty())
		{ 
			while(!s1.empty() )
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		int t = s2.top();
		s2.pop();	
		return t;
	}
	bool empty()
	{
		if(s1.empty() && s2.empty()) return true;
		else return false;
	}
};
// Revise the recursive part
class queueTwo{
	stack<int> s ; 
	public:
	void push(int x) {s.push(x);return;}
	int pop()
	{
		if(s.empty()) return -1;
		int x = s.top();
		s.pop();
		if(s.empty()) return x;
		int item = pop();
		s.push(x);
		return item;
	}
	bool empty() {return s.empty();}
};

int main()
{
	queueTwo q ; 
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	return 0;
}
/*
Approach 1 :-
- Two stacks , stack1 and stack2 would be used , for enQue stack1 would be used first
- For deque , if elements are in stack1 and stack2 is empty , then we will pop and push the elements in stack2 and then we will deQue from stack2 , in this way FIFO order of deQue is maintained 
- Stack2 is only for deQue operation , after the stack1 gets full , further insertion won't take place into Stack2

Approach 2:-
- enQue() would as same as the first approach but We would use the inbuilt memory stack of the system as the second stack to pop() by using recursion
*/