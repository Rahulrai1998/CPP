// Implementation of stack using array in C style

#include<bits/stdc++.h>
using namespace std ; 
#define MAX 5

class Stack{
	public:
	int tp ;
	int arr[MAX];
	Stack(){tp=-1;}
};

bool isEmpty(Stack *);
bool isFull(Stack *);
void push(Stack *,int);
int pop(Stack *);
int top(Stack *);

int main()
{
	Stack *st = new Stack(); 
	int item ; 
	push(st , 45);
	push(st , 40);
	push(st , 46);
	push(st , 47);
	push(st , 48);
	cout<<top(st)<<endl;
	item = pop(st);
	if(item!=-9999) cout << item << endl;
	cout<<top(st)<<endl;
	return 0;
}
bool isEmpty(Stack *p) {return (p->tp == -1);} 
bool isFull(Stack *p) {return (p->tp == MAX - 1);}
void push(Stack *p , int item)
{
	if(isFull(p))
	{
		cout << "OVERFLOW"<<endl;
		return;
	}
	p->tp = p->tp+1 ; 
	p->arr[p->tp] = item ; 	
	return;
}
int pop(Stack *p)
{
	if(isEmpty(p))
	{
		cout <<"UNDERFLOW"<< endl;
		return -9999;
	}
	int item = p->arr[p->tp];
	p->tp-- ; 
	return item;
}
int top(Stack *p)
{
	if(isEmpty(p))
	{
		cout << "UNDERFLOW" <<endl;
		return -9999 ; 
	}
	return p->arr[p->tp] ;
}
