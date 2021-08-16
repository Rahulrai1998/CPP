#include<iostream>
using namespace std ; 

class node{
	public:
	int prn , info ; 
	node *next ;
	node(int val1 , int val2)
	{
		info = val1 ; 
		prn = val2 ; 
		next = NULL ; 
	} 
};

class queue{
	node *head  ; 
	public:
	queue(){ head = NULL ;}
	
	void enQue(int item , int n)
	{
		node *locp , *loc ;
		loc = head ;  
		while( loc != NULL and loc->prn <= n)
		{
			locp = loc ; 
			loc = loc->next ; 
		}
		node *newnode = new node(item , n);
		if(head == loc)
		{
			newnode->next = head ; 
			head = newnode ; 
		}
		else
		{
			newnode->next = locp->next ; 
			locp->next = newnode ; 
		}
		return ; 
	}
	void deQue()
	{
		if(head == NULL )
		{
			cout << "EMPTY LIST" <<endl ; 
			return ; 
		}
		// highest priority i.e head would be deleted first
		node *temp = head ; 
		head = head->next ; 
		temp->next = NULL ; 
		delete temp ; 
		return ; 
	}
	void top()
	{
		cout << head->info << endl ; 
		return ; 
	}
};

int main()
{
	queue q ; 
	q.enQue(10 , 5);
	q.enQue(11 , 1);
	q.enQue(25 , 3);
	q.top();
	q.deQue();
	q.top();
	return 0 ; 
}