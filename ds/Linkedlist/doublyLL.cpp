//Doubly Linked list

#include<bits/stdc++.h>
using namespace std ;

class node{
	public:
	int data ; 
	node * next , *prev ;
	node(int val){
		data = val ; 
		next = NULL ; 
		prev = NULL ; 
	}
};
void create(node** , int);
void insertAtHead(node**,int);
void insertAtTail(node**,int);
void insertAtPosition(node** ,int,int);
int deleteHead(node**);
int deleteTail(node**);
int deleteAtPos(node** , int);
void display(node*);
int main()
{
	node * head = NULL ; 
	create(&head , 5);
	display(head);
	insertAtPosition(&head , 6 , 6);
	display(head);
	insertAtHead(&head , 7);
	display(head);
	insertAtTail(&head , 8);
	display(head);
	int del = deleteHead(&head);
	if(del!=-9999)
		cout << del << " is deleted" << endl ; 
	display(head);
	del = deleteTail(&head);
	if(del!=-9999)
		cout << del << " is deleted" <<endl ;  
	display(head);
	del = deleteAtPos(&head , 2) ; 
	if(del!=-9999)
		cout << del << " is deleted" <<endl ; 
	display(head);

	return 0 ;
}

void create(node**head , int n)
{
	if(*head != NULL)
	{
		cout << "List is created" << endl ; 
		return ; 
	}
	node *temp , *newnode ; 
	int item ; 
	for(int i = 1 ; i<=n ; i++)
	{
		cout << "Enter the node data = " ; 
		cin >> item ; 
		newnode = new node(item);
		if(*head==NULL)
			*head = newnode ; 
		else
		{
			temp->next = newnode ; 
			newnode->prev = temp ; 
		}
		temp = newnode ; 
	}
	return ; 

}
void display(node*head)
{
	if(head == NULL)
	{
		cout << "List is Empty" << endl;
		return ;  
	}
	node * loc = head ; 
	while(loc!=NULL)
	{
		cout << loc->data << "->" ;
		loc = loc->next ; 
		 
	}
	cout << "NULL" <<endl ; 
	return ; 
}
void insertAtHead(node**head , int item)
{
	if(*head==NULL)
	{
		cout << "List is empty" <<endl ; 
		return ; 
	}
	node *newnode = new node(item);
	newnode->next = (*head) ; 
	(*head) -> prev = newnode ; 
	*head = newnode ; 
	return ;  
}
void insertAtTail(node**head , int item)
{
	if(*head == NULL)
	{
		cout << "List is empty" << endl ; 
		return ; 
	}
	node*temp = *head ; 
	while(temp->next != NULL)
	{
		temp=temp->next ; 
	}
	node * newnode = new node(item);
	temp->next = newnode ; 
	newnode->prev = temp ; 
	return ; 
}
void insertAtPosition(node**head , int item , int pos)
{
	if(*head==NULL)
	{
		cout <<"List is empty"<<endl;
		return;
	}
	node *newnode , *loc ; 
	int totalNode , currentNode ; 
	loc = *head;
	totalNode = 0 ; 
	while(loc!=NULL)
	{
		totalNode++ ; 
		loc = loc->next ; 
	}
	if(pos<=0 || pos>totalNode+1)
	{
		cout << "Invalid Position" << endl; 
		return ; 
	} 
	loc = *head ;
	currentNode = 1 ; 
	while(currentNode < pos-1 && loc!=NULL)
	{
		loc = loc->next ; 
		currentNode++ ;
	} 
	newnode = new node(item);
	if(pos==1)
	{
		newnode->next = *head ;
		*head = newnode ; 
	}
	else
	{
		newnode->next = loc->next;
		newnode->next->prev = newnode; 
		newnode->prev = loc ;
		loc->next = newnode ; 
		
	}
	return;
}
int deleteHead(node**head)
{
	if(*head==NULL)
	{
		cout << "List is empty" <<endl ;
		return -9999 ;  
	}
	node *temp = (*head) ; 
	int item = temp->data ; 
	*head = (*head)->next ; 
	(*head)->prev = NULL;
	temp->next = NULL ;
	delete temp ; 
	return item ;  
}
int deleteTail(node**head)
{
	if(*head == NULL)
	{
		cout << "List is empty" <<endl ;
		return -9999 ;  
	}
	node *temp =(*head);
	while(temp->next!=NULL)
	{
		temp = temp->next ; 
	}
	int item = temp->data ; 
	if(temp==(*head))
		*head = temp->next ; 
	else
	{
		temp->prev->next = temp->next ; 
		temp->prev = NULL ; 	
	}
	delete temp ;
	return item ; 
}
int deleteAtPos(node**head , int pos)
{
	if(*head == NULL)
	{
		cout << "List is empty" <<endl ;
		return -9999 ;  
	}
	int item , count ;
	node *temp  = (*head);
	if(pos == 1)
	{
		item = (*head)->data ; 
		*head = (*head)->next ; 
		(*head)->prev = NULL ; 
	} 
	else
	{
		count = 1 ; 
		while(temp!=NULL && count!=pos)
		{
			temp = temp->next ; 
			count ++ ; 
		}
		item = temp->data ; 
		temp->prev->next = temp->next ;
		if(temp->next!=NULL)
			temp->next->prev = temp->prev ;
		temp->next = temp->prev = NULL ;  
	}
	
	delete temp ; 
	return item ; 
}