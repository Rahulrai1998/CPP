// Merge 2 sorted linked list

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
node *merge(node*head1 , node*head2)
{
	node *ptr1 , *ptr2 , *dummy , *p3; 
	ptr1 = head1 ;
	ptr2 = head2 ; 
	dummy = new node(-1);
	p3 = dummy ; 
	
	while(ptr1!=NULL && ptr2!=NULL)
	{
		if(ptr1->data < ptr2->data)
		{
			p3->next = ptr1 ; 
			ptr1 = ptr1->next ; 
			
		}
		else
		{	
			p3->next = ptr2 ; 
			ptr2 = ptr2->next ; 
		}
		p3 = p3->next ; 
	} 
	while(ptr1!=NULL)
	{
		p3->next = ptr1 ;
		ptr1 = ptr1->next ;  
		p3 = p3->next ; 
	}
	while(ptr2!=NULL)
	{
		p3->next = ptr2 ; 
		ptr2 = ptr2->next ; 
		p3 = p3->next ; 
	}
		
	return dummy->next ; 

}
node *mergeRecursive(node *head1 , node*head2)
{
	if(head1==NULL)
		return head2 ; 
	if(head2 == NULL)
		return head1 ; 
	node *result ; 
	if(head1->data < head2->data)
	{
		result = head1 ; 
		result->next = mergeRecursive(head1->next , head2);
	}
	else
	{
		result = head2 ; 
		result->next = mergeRecursive(head1 , head2->next);
	}
	return result ; 
}
int main()
{
	node *head1 , *head2 ,*mergedHead ; 
	head1 = head2 = NULL ; 
	int n , m ; 
	cin >> n >> m ;  
	create(&head1 , n);
	create(&head2 , m);
	display(head1);
	display(head2);
	mergedHead =   mergeRecursive(head1,head2);
	display(mergedHead);
	return 0 ; 
}
/*
Approach 1(using dummy node - iterative) :-
- create a dummy node in which the nodes will be merged 
- traverse the both lists and compare the data of both
- lesser data node is merged to the dummy and then so on
- after one list gets NULL , merge the rest part of the second list to the new list
- at last , return the next of dummy as the new head the new list
 - Time-complexity : O(m+n)  ,since we are traversing both the lists fully
Approach 2(recursive):-
- TC : O(m+n)

**Head to GFG for further informations , explations and for merging k number of sorted linked list
*/