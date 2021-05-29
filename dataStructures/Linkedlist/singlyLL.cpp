//Singly Linked list

#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int val)
	{
		data = val;
		next = NULL;
	}
};

void create(node **head, int n)
{
	if (*head != NULL)
	{
		cout << "List is already created" << endl;
		return;
	}
	int item;
	node *temp, *newnode;
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter the data item = ";
		cin >> item;
		newnode = new node(item);
		if (*head == NULL)
			*head = newnode;
		else
			temp->next = newnode;
		temp = newnode;
	}
	return;
}
void display(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
	return;
}

bool search(node *head, int key)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return false;
	}
	node *temp = head;
	while (temp != NULL)
	{
		if (temp->data == key)
			return true;
		temp = temp->next;
	}
	return false;
}
void insertAtHead(node **head, int item)
{
	if (*head == NULL)
	{
		cout << "List is Empty " << endl;
		return;
	}
	node *newnode = new node(item);
	newnode->next = *head;
	*head = newnode;
	return;
}
void insertAtPos(node **head, int pos, int item)
{
	if (*head == NULL)
	{
		
		return;
	}
	node *loc, *locp;
	locp = NULL;
	loc = *head;
	int totalnode = 0, currentnode;
	while (loc != NULL)
	{
		totalnode = totalnode + 1;
		loc = loc->next;
	}
	if (pos > totalnode + 1 || pos <= 0)
	{
		
		return;
	}
	currentnode = 1;
	loc = *head;
	while (currentnode < pos - 1 && loc != NULL)
	{
		currentnode += 1;
		loc = loc->next;
	}
	node *newnode = new node(item);
	if (pos == 1)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = loc->next;
		loc->next = newnode;
	}
	return;
}

void insertAtTail(node **head, int item)
{
	if ((*head) == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	node *temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	node *newnode = new node(item);
	temp->next = newnode;
	return;
}
node *reverseRecursive(node *head)
{
	if ((head) == NULL || (head)->next == NULL)
	{
		return (head);
	}
	node *newhead = reverseRecursive((head)->next);
	(head)->next->next = (head);
	(head)->next = NULL;
	return newhead;
}
int main()
{
	node *newNode;
	node *head = NULL;
	int choose;
	while (1)
	{
		cout << "Enter the choice = ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			create(&head, 4);
			break;
		case 2:
			display(head);
			break;
		case 3:
			insertAtHead(&head, 5);
			break;
		case 4:
			insertAtTail(&head, 8);
			break;
		case 5:
			newNode = reverseRecursive(head);
			break;
		case 6:
			cout << search(head, 1) << endl;
			break;
		case 7:
			insertAtPos(&head,2,55);	
			break;
		default:
			cout << "Error" << endl;
		}
	}
	return 0;
}