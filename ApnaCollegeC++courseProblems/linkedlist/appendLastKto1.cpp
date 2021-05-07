// Append last k nodes to start of the list

#include<iostream>
using namespace std ; 

class node{
	public:
	int data ; 
	node * next;
	node(int val){
		data = val ; 
		next = NULL ; 
	}
};

void create(node**head , int n)
{
	if(*head != NULL)
	{
		cout << "List is already created" << endl ; 
		return ; 
	}
	int val , i ,  nodeCount = 1; 
	node *newnode , *temp ; 
	for(i = 1 ; i<=n ; i++)
	{
		cout << "Enter the value of node " << nodeCount << " = ";
		cin >> val ; 
		newnode = new node(val);
		if(*head == NULL)
			*head = newnode ; 
		else
			temp->next = newnode ; 
		temp = newnode ; 
		nodeCount++;
	}
	return;   
}
void display(node*head)
{
	if(head == NULL)
	{
		cout << "List is empty" << endl ; 
		return ; 
	}
	node * temp = head ; 
	while(temp!=NULL)
	{
		cout << temp->data<<"->"; 
		temp=temp->next ;
	}
	cout << "NULL"<<endl ; 
	return ; 
}
int nodeCount(node*head)
{
	int count = 0 ; 
	node * temp = head ; 
	while(temp!=NULL)
	{
		count++ ;
		temp = temp->next ;  
	}
	return count ; 
}
void kAppendAtBegin(node**head , int k)
{
	if(*head==NULL)
	{
		cout << "List is empty" <<endl ; 
		return ; 
	}
	int listLen = nodeCount(*head);
	node *tail , *newHead , *newTail ; 
	tail = (*head);
	int count = 1 ; 
	while(tail->next != NULL)
	{
		if(count==listLen-k)
			newTail = tail ; 
		if(count == listLen - k + 1)
			newHead = tail ; 
		count++ ; 
		tail=tail->next ; 
	}
	newTail->next = NULL ; 
	tail->next = (*head) ; 
	*head = newHead ; 
	return ; 
}
int main()
{
	node * head = NULL ;
	int n ; 
	cin >> n ;  
	create(&head , n);
	display(head); 
	kAppendAtBegin(&head , 3);
	display(head); 
	return 0 ; 
}
/*
Time-complexity kAppendAtBegin() : O(n)
Approach :-
- First we will count the list elements by nodeCount()
- Now , we will declare 3 node pointers i.e , tail , newTail and newHead and will assign current head to the tail
- We will traverse the list upto last node and alongwith , we will assign newTail to (totalnode - k) node and newHead to the next node .
- after coming out of loop we will make next of tail as current head , next of newTail as NULL 
- and finally , we will update the head pointer to the newHead . 
 */