#include<iostream>
using namespace std ; 

class node{
	public:
	int data ; 
	node* next ;
	node(int val){
		data = val ; 
		next = NULL;
	} 
};
void enQue(node *&f , node *&r , int item)
	{
		node *newnode = new node(item);
		if(f == NULL)
		{
			f = newnode;
			r = newnode ; 
		}
		else
		{
			r->next = newnode ; 
			r = newnode; 
		}
		return ; 
	}

int peek(node *f)
{
	return f->data ; 
}	


int main()
{
	node *front , *rear ;
	front = rear = NULL ; 
	enQue(front,rear,10);
	enQue(front,rear,15);
	enQue(front,rear,11);
	cout << peek(front) ; 
	 
	


	return 0 ; 
}