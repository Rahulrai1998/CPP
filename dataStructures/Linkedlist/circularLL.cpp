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

void create(node**head , int n);
void display(node*);
void insertAtHead(node**head , int item);
void insertAtTail(node**head , int item);
int deleteHead(node**head);
int deleteTail(node**head);
void reverseList(node**head);

int main()
{
	node *head = NULL ; 
	create(&head , 5);
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