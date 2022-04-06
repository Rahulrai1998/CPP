// Detection and Deletion of cycle in a list
// Multiple methods and optimization available
// BUG - detectCycle() is working fine for upto 3 elements list , and for more than 3 elements it's not responding

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
void removeCycle(node**);
bool detectCycle(node*);
void createCycle(node** , int);
int main()
{
	node *head = NULL ;
	int n ; 
	cin >> n ;  
	create(&head , n);
	display(head); 
	createCycle(&head , 4);
	cout << detectCycle(head)<<endl;
	removeCycle(&head);
	cout << detectCycle(head)<<endl;
	display(head);
	return 0 ; 
}
void createCycle(node**head , int pos)
{
	node *temp , *cycleNode ; 
	int count = 1 ; 
	temp = (*head) ; 
	while(temp->next!=NULL)
	{
		if(count==pos)
			cycleNode = temp ; 
		count++ ; 
		temp = temp->next ; 
	}
	temp->next = cycleNode ; 
	return ;
}
bool detectCycle(node*head)
{
	node *fast , *slow ; 
	fast = head; 
	slow = head;
	while(fast->next!=NULL && fast!=NULL && slow!=NULL)
	{
		slow = slow->next ; 
		fast = fast->next->next ; 
		if(slow==fast){
			return true ;
		}
			 
	}
	return false ; 
}
void removeCycle(node**head)
{
	node *fast , *slow ; 
	fast = *head;
	slow = *head;
	

	slow = slow->next ; 
	fast = fast->next->next ; 
	
	while (slow!=fast)
	{
		slow = slow->next ; 
		fast = fast->next->next ; 
	} 
	
	fast = (*head);
	while(fast->next!=slow->next)
	{
		
		fast = fast->next ; 
		slow = slow->next ; 
		
		
	}
	slow->next=NULL;
	
	return;  
}

/*
- Meaning of having cycle in a list is , next of two nodes would be pointing over same node .

Approach to makeCycle :-
- intialize two node pointers temp and cycleNode
- run loop until temp points over the last node and cycleNode points over the node at which we want to make a cycle
- then assign next of the last node the cycleNode
Time-complexity of makeCycle : O(n)

Approach to detectCycle :-
- To detect the cycle we are using Floyd's Hare and Tortoise Algorithm , in which we will be using two pointers , fast and slow . fast will move two nodes as slow pointer will move only one node . 
- We , will move both the pointers untill they meet at the same node . 
- If fast and slow pointers meet at same node then the detectCycle will return true as it means there is a cycle otherwise it will return false .  
Time complexity detectCycle : 

Approach to removeCycle :-
- we will make the two pointers fast and slow meet at the same node .
- after confirming the cycle , we will assign fast to the head and then will remain the slow as it is
- now , fast and slow will be moved one step ahead until their next pointer equals . 
- then point next of the slow as NULL .  
Time Complexity removeCycle : 


*/