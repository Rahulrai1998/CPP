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
int main()
{
	node * head = NULL ;
	int n ; 
	cin >> n ;  
	create(&head , n);
	display(head); 


	return 0 ; 
}