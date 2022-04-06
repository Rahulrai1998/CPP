//Reversing nodes in a group of size k , in a list

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
node * reverseKnodes(node* , int);

int main()
{
	node * head = NULL ;
	int n,k; 
	cin >> n ;  
	create(&head , n);
	display(head); 
	cout << "Enter the length of group = ";
	cin >> k ; 
	node * newhead = reverseKnodes(head,k);
	display(newhead);


	return 0 ; 
}
node * reverseKnodes(node*head , int k)
{
	if(head==NULL)
		return head;  
	node *prev , *curr , *nex ; 
	int count = 1;
	prev = NULL ; 
	curr = head ; 
	while(curr!=NULL && count<=k)
	{	
		nex = curr->next ; 
		curr->next = prev ; 
		prev = curr ; 
		curr = nex ; 
		count++ ; 
	}
	if(nex!=NULL)
		head->next = reverseKnodes(nex , k);
	return prev ; 
}
/*
Time-complexity of reverseKnodes : O(n)
Approach : 
- Reverse first k nodes iteratively and after loop ends keep the head pointer as it is i.e head = firstnode ,instead of updating it to the last node of the first k nodes , so that we can link the first node of next group to it(first group)
- Now , nex/curr pointer will point over (k+1)th node 
- Recursively call for the list starting from (k+1)th node i.e curr/nex pointer . 
- And assign the returned value(the first node of the next reversed k-nodes group) of the recursive function to the next of the first node of the first group . 

*/