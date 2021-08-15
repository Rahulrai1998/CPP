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
class queue{
	node *front ; 
	node *rear;
	public:
	queue(){
		front = rear = NULL ; 
	}
	void enQue(int item)
	{
		node *newnode = new node(item);
		if(front == NULL)
		{
			front = newnode;
			rear = newnode ; 
		}
		else
		{
			rear->next = newnode ; 
			rear = newnode; 
		}
		return ; 
	}
	void deQue()
	{
		if(empty())
		{
			cout << "UNDERFLOW" <<endl;
			return ;
		}
		node *temp = front ; 
		front = front->next ; 
		temp->next = NULL ;
		if(temp == rear) rear = NULL ; 
		delete temp ; 
		return ; 
	}
	bool empty() {return front == NULL;}  
	int peek() {return front->data ; }	

};

int main()
{
	queue q ; 
	q.enQue(5);
	q.enQue(6);
	q.enQue(7);
	cout << q.peek() <<endl ;
	q.deQue();
	cout << q.peek() << endl ;  
	q.deQue();
	cout << q.peek() << endl ;  
	q.deQue();
	q.deQue();
	return 0 ; 
}