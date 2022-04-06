// Putting the even position elements after the odd position elements 
#include<iostream>
using namespace std;

class node{
	public:
	int data ; 
	node *next ; 
	node(int val){
		data = val ; 
		next = NULL ; 
	}
};

void pushAtTail(node** , int);
void display(node*);
void evenAfterOdd(node**head)
{
	if(*head == NULL)
	{
		cout << "List is empty" <<endl;
		return ;
	}	
	node *odd , *even , *evenStart ; 
	odd = *head ;
	even = (*head)->next ;  
	evenStart = even ;
	while(odd->next!=NULL && even->next!=NULL)
	{
		odd->next = even->next ; 
		odd = odd->next ; 
		even->next = odd->next ; 
		even = even->next ; 
	} 
	odd->next = evenStart ; // No need to explicitly make next[even] as NULL , as it is already been taken care inside the upper loop.
	return ; 
}

int main()
{
	node *head = NULL  ; 
	int n , item ;
	cout << "Enter number of nodes = " ;
	cin >> n ; 
	for(int i = 1 ; i<=n ; i++) 
	{
		cout << "Enter the data field = " ; 
		cin >> item ; 
		pushAtTail(&head , item);
	}
	display(head);
	evenAfterOdd(&head);
	display(head);
	return 0 ; 
}
void pushAtTail(node**head , int item)
{
	node *newnode = new node(item);
	if(*head == NULL)
	{
		*head = newnode ; 
		 return ; 
	}
	node *temp = (*head) ; 
	while(temp->next != NULL) temp = temp->next ; 
	temp->next = newnode ;
	return ;
}
void display(node*head)
{
	if(head == NULL)
	{
		cout << "List is empty" <<endl ;
		return ; 
	}
	node *temp = head ;
	while(temp!=NULL)
	{
		cout << temp->data << "->" ;
		temp = temp->next ; 
	} 
	cout<<"NULL"<<endl ;
	return ;  
}
/*
Time-complexity : O(n)
Approach :-
- we will use three node pointers , odd , even and evenStart
- evenStart pointer is used to mark/store the first even element so that after reaching upto the last odd element , we can link the first even node to the next of the last odd node .  
- We will assign odd to head and even to next[head], and will run a loop and traverse the list until either of the odd's or even's next get NULL , alongwith linking each type node together .
- and at the end , we will link the odd to even through evenStart pointer .   
*/