#include<bits/stdc++.h>
using namespace std;
#define MAX 10 

class Stack{
	int top ; 
	public:
	int arr[MAX];
	Stack(){
	top = -1 ; }
	bool isEmpty()
	{
		return top == -1 ;
	}
	bool isFull(){
		return top == MAX-1;
	} 
	void push(int x)
	{
		if(isFull())
		{	
			cout << "OVERFLOW "<<endl; 
			return ; 
		}
		top++ ; 
		arr[top] = x ;
		return ; 
	}
int pop()
{
	if(isEmpty())
	{
		cout << UNDERFLOW<< endl;
		return -9999 ; 
	}
	int item = arr[top] ; 
	top-- ; 
	return item ; 
}
int Top()
{
	if(isFull())
	{
		cout <<"OVERFLOW"<<endl;
		return -9999 ; 
	}
	return arr[top] ; 
}
};

int main()
{
	Stack stk ; 
	stk.push(54);
	stk.push(22);
	stk.push(98);
	stk.push(100);
	cout << stk.Top() << endl ; 
	cout << stk.pop() << endl;
	cout<< stk.Top() << endl;
	return 0;
}
