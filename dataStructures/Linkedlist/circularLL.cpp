// Circular Linked list

#include<bits/stdc++.h>
using namespace std ;
class node{
	public:
	int info ; 
	node *next ; 
	node(int val){
		info = val ; 
		next = NULL;
	}
}; 

void create(node**, int);
void display(node*);
void insertAtHead(node** , int);
void insertAtTail(node**, int);
int deleteHead(node**);
int deleteTail(node**);
void reverseList(node**);

int main()
{
	node *head = NULL ; 
	create(&head , 5);
	display(head);
	insertAtHead(&head , 98);
	display(head);	
	insertAtTail(&head , 100);
	display(head);	
	return 0 ;
}
void create(node**head , int n)
{
	if(*head!=NULL)
	{
		cout << "List is already created" << endl ;
		return; 
	}
	node *newnode , *temp ; 
	int item ; 
	for(int i = 1 ; i <=n ; i++)
	{
		cout << "Enter the node data = ";
		cin >> item ; 
		newnode = new node(item);
		if(*head==NULL)
			*head = newnode ; 
		else
			temp->next = newnode ; 
		temp = newnode ; 
	}
	newnode->next = (*head);
	return ;   
}
void display(node*head)
{
	if(head==NULL)
	{
		cout << "List is empty"<<endl;
		return ; 
	}
	node *temp = head ; 
	do{
		cout <<temp->info<<"->" ; 
		temp=temp->next ; 
	
	}while(temp!=(head));
	cout<<"head"<<endl ; 
	return ; 
}
void insertAtHead(node**head , int val)
{
	if(*head==NULL)
	{
		cout << "List is Empty" << endl ;
		return ;  
	}
	node *newnode , *temp ; 
	newnode = new node(val);
	 temp = (*head);
	while(temp->next != (*head))
	{
		temp = temp->next ; 
	}
	temp->next = newnode ; 
	newnode->next = (*head) ;
	(*head) = newnode ; 
	return ; 
}
void insertAtTail(node**head , int item)
{
	if(*head == NULL)
	{
		cout << "List is empty" <<endl ; 
		return ; 
	}
	node *newnode , *temp ; 
	newnode = new node(item);
	temp = (*head);
	while(temp->next!=(*head))
	{
		temp = temp->next ; 
	}
	temp->next = newnode ; 
	newnode->next = (*head) ; 
	return ; 
}