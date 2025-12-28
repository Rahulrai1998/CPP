#include<iostream>
using namespace std;
typedef struct node{
	int data ; 
	struct node *next ; 
}nod ;

void push(nod*& , int);
void pop(nod*&);
int top(nod*);
bool empty(nod*);
 
int main()
{
	nod *tp = NULL ; 
	push(tp , 5);
	push(tp , 6);
	pop(tp);
	cout << top(tp) << endl; 
	return 0 ;
}
bool empty(nod*tp){return tp == NULL ;}
void push(nod *&tp , int item)
{
	nod *newnode = new nod();
	newnode->data = item ; 
	newnode->next = tp ; 
	tp = newnode ; 
	return ; 
}
void pop(nod *&tp)
{
	if(empty(tp)) return ; 
	nod *temp = tp ; 
	tp  = tp->next ; 
	temp->next = NULL ;
	delete temp ;  
	return ; 
}
int top(nod *tp)
{
	if(empty(tp)) return -9999;
	return tp->data ;  
}
