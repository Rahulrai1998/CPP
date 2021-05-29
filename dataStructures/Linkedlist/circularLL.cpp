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
void insertAtPosition(node** , int , int);
int deleteHead(node**);
int deleteTail(node**);
void reverseList(node**);
int deletion(node** , int);
void reverse(node**);

int main()
{
	int deleted ; 
	node *head = NULL ; 
	create(&head , 5);
	display(head);
	insertAtHead(&head , 98);
	display(head);	
	insertAtTail(&head , 100);
	display(head);	
	deleted = deleteHead(&head);
	if(deleted!=-9999)
		cout << deleted << " is deleted" <<endl ; 
	display(head);
	deleted = deleteTail(&head);
	if(deleted!=-9999)
		cout << deleted << " is deleted"<<endl ; 
	display(head);
	deleted = deletion(&head , 3) ;
	if(deleted!= -9999)
		cout << deleted << " is deleted" <<endl ; 
	 display(head) ; 
	insertAtPosition(&head , 321 , 2);
	display(head);
	reverse(&head);
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
int deleteHead(node**head)
{
	if((*head)==NULL)
	{
		cout <<"List is empty"<<endl ;
		return -9999 ;  
	}
	node *temp = (*head) ;
	node *temp2 = (*head) ; 
	while(temp->next!=(*head))
	{
		temp = temp->next ; 	
	}
	int item = (*head)->info ; 
	if(temp==*head)
		*head = NULL ; 
	else
	{
		*head = (*head)->next ; 
		temp->next = (*head) ; 
	}
	temp2->next = NULL ; 
	delete temp2 ; 
	return item ; 
}
int deleteTail(node**head)
{
	if(*head ==NULL)
	{
		cout <<"List is empty"<<endl ;
		return -9999 ; 
		 
	}
	node *pre , *cur ; 
	pre = NULL ; 
	cur = (*head ); 
	int item;
	while(cur->next!=(*head))
	{
		pre = cur ; 
		cur = cur->next ; 
	}
	item = cur->info ; 
	if(cur == (*head)) 				
		*head = NULL; 
	else
		pre->next = *head; 
	cur->next = NULL ; 
	delete cur ; 
	return item ; 
}
int count(node *head)
{
	node *temp  = head; 
	int nodeCount = 1; 
	while(temp->next!=head)
	{
		temp = temp->next ;
		nodeCount++ ; 
		 
	}
	return (nodeCount);
}
int deletion(node**head , int pos)
{
	if(*head==NULL)
	{
		cout <<"List is empty"<< endl ; 
		return -9999 ; 
	}
	if(pos>count(*head) || pos<=0 )
	{
		cout << "Invalid Position" << endl ;
		return -9999; 
	}
	if(pos == 1)
		return deleteHead(head);
	node *pre , *toDelete; 
	pre = NULL ; 
	toDelete = *head ;
	int cnt = 1 ;  
	while(cnt != pos) 
	{
		pre = toDelete ; 
		toDelete = toDelete->next ; 
		cnt++ ; 
	}
	int item = toDelete->info ; 
	pre->next = toDelete->next ; 
	toDelete->next = NULL ; 
	delete toDelete ; 
	return item;
}
void insertAtPosition(node**head , int item , int pos)
{
	if(*head == NULL)
	{
		cout << "List is Empty " << endl ; 
		return ; 
	}
	int totalNode = count(*head);
	if(pos<=0 || pos > totalNode+1)
	{
		cout << "Invalid Position" <<endl ; 
		return ; 
	}
	int cnt = 1 ;
	node *newnode , *temp ; 
	temp = *head ; 
	while(cnt != pos - 1)
	{
		temp = temp->next ; 
		cnt++ ; 
	} 
	newnode = new node(item) ; 
	if(pos == 1)
	{
		node *loc = *head ; 
		while(loc->next!=*head)
		{
			loc = loc->next ; 
		}
		loc->next = newnode ; 
		newnode->next = *head ; 
		*head = newnode ; 
	}
	else
	{
		newnode->next = temp->next ; 
		temp->next = newnode ; 
	}
	return ; 
}
void reverse(node**head)
{
	if(*head==NULL || (*head)->next == (*head))
	{
		cout <<"List is empty or it has only a single node"<<endl ;
		return ;  
	}
	node *pre , *curr , *nex ; 
	pre = NULL ; 
	curr = (*head) ; 
	do
	{
		nex = curr->next ; 
		curr->next = pre ; 
		pre = curr ; 
		curr = nex;
	}while(curr != (*head));
	(*head) -> next = pre ; 
	(*head) = pre ; 
	return ;
}