// Implementation of stack using array in C style

#include<bits/stdc++.h>
using namespace std ; 
#define MAX 5

class stack{
	 public:
	int top ;
	int arr[MAX];
	stack(){top=-1;}
};

bool isEmpty(stack *);
bool isFull(stack *);
void push(stack *,int);
int pop(stack *);
int top(stack *);

int main()
{
	class stack st ; 
	stack *p = &st;
	int item ; 
	push(p , 45);
	push(p , 40);
	push(p , 46);
	push(p , 47);
	push(p , 48);
	top(p);
	item = pop(p);
	if(item!=-9999) cout << item << endl;
	return 0;
}
bool isEmpty(stack *p) return (p->top == -1) ;
bool isFull(stack *p) return (p->top == MAX - 1); 
void push(stack *p , int item)
{
	if(isFull(p))
	{
		cout << "OVERFLOW"<<endl;
		return;
	}
	p->top = p->top+1 ; 
	p->arr[p->top] = item ; 	
	return;
}
int pop(stack *p)
{
	if(isEmpty(p))
	{
		cout <<"UNDERFLOW"<< endl;
		return -9999;
	}
	int item = p->arr[p->top];
	p->top-- ; 
	return item;
}
int top(stack *p)
{
	if(isEmpty(p))
	{
		cout << "UNDERFLOW" <<endl;
		return -9999 ; 
	}
	return p->arr[p->top] ;
}
