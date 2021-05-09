// Find intersection point of 2 sorted Linked List

#include<iostream>
#include<cstdlib>
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
	node*temp = head ; 
	while(temp!=NULL)
	{
		count++ ; 
		temp = temp->next ; 
	}
	return count ; 
}
void intersectList(node**head1 , node**head2 , int pos)
{
	if(head1==NULL || head2==NULL)
	{
		cout << "One of the list is empty" <<endl ;
		return ; 
	}
	int l1 , l2 ,d; 
	node *ptr1 , *ptr2 ; 
	l1 = nodeCount(*head1);
	l2 = nodeCount(*head2);
	d = abs(l1-l2);
	if(l1>l2)
	{
		ptr1 = *head1 ; 
		ptr2 = *head2;
	}
	else
	{
		ptr1 = *head2 ; 
		ptr2 = *head1 ;  
	}
	pos-- ; 
	while(pos-- && ptr1!=NULL)
	{
		ptr1 = ptr1->next ; 
	}
	while(ptr2->next!=NULL)
	{
		ptr2 = ptr2->next ; 
	}
	ptr2->next = ptr1 ;
	return ;  
}

int getIntersection(node*head1 , node *head2)
{
	if(head1 == NULL || head2 == NULL)
	{
		cout<< "One of the list empty" << endl ; 
		return -1; 
	}
	int l1 = nodeCount(head1);
	int l2 = nodeCount(head2);
	node *point1 , *point2 ; 
	int d = abs(l1-l2);
	if(l1>l2){
		point1 = head1 ; 
		point2 = head2 ; 
	} 
	else{
		point1 = head2 ; 
		point2 = head1 ; 
	}
	while(d>0)
	{
		point1 = point1->next ;
		if(point1==NULL)
			return -1 ; 
		d-- ;  
	}
	while(point1 != NULL && point2 != NULL)
	{
		if(point1==point2)
			return point1->data ; 
		point1 = point1->next; 
		point2 = point2->next; 
	}
	return -1 ; 
}
int main()
{
	node *head1 , *head2 ;
	head1 = head2 = NULL ; 
	int n , m ; 
	cin >> n >> m;  
	create(&head1 , n);
	display(head1);
	create(&head2 , m) ; 
	display(head2);
	intersectList(&head1 , &head2 , 3);
	display(head1);
	display(head2);
	int interNode = getIntersection(head1 , head2); 
	if(interNode!=-1)
		cout << interNode << " is the intersection node" <<endl ; 
	return 0 ; 
}

/*
There would be 3 approach to solve this ....
- Here , intersection means getting the common node address not common data . 

2 Approach(By marking visited nodes) :-
- 
- Time-complexity : O(m+n)

3rd approach(by getting the node counts): - 
- we are following this one , this is the most efficient way to deal . 
- Determine the bigger and the smaller list
- traverse the bigger  list upto the node corresponding to first node of the second list , by using the difference of the node counts. 
- then traverse both the lists upto the last node and check if any node is common in .
- if intersection node is found return the data of the node else return -1
 - Time complexity : O(m+n)

**Head to GFG for different approaches and explanations

*/