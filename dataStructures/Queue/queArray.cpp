#include<iostream>
#define MAX 20
using namespace std ; 

class queue{
	public :
	int front , back ;
	int arr[MAX];
	queue(){
		front = back = -1 ; 
	}
};

void enQue(queue* , int);
void deQue(queue*);
int peek(queue*);
bool empty(queue*);

int main()
{
	queue *q = new queue(); 
	enQue(q,4);
	enQue(q,6);
	enQue(q,5);
	enQue(q,7);
	deQue(q);
	cout << peek(q) <<endl;
	deQue(q);
	cout << peek(q) << endl ; 
	return 0 ; 
}
void enQue(queue *q , int x)
{
	if(q->back==MAX-1)
	{
		cout << "OVERFLOW" <<endl ; 
		return;
	}
	q->arr[++(q->back)] = x ; 
	if(q->front == -1){q->front++;}
}
void deQue(queue *q )
{
	if(empty(q))
	{
		cout << "UNDERFLOW" <<endl ; 
		return ; 
	}
	if(q->front == q->back)
	{
		q->front = q->back = -1 ; 
	}
	else q->front++ ; 
}
int peek(queue *q )
{
	if(empty(q))
	{
		cout << "UNDERFLOW" <<endl;
		return -9999;	
	}
	return q->arr[q->front] ; 
}
bool empty(queue *q )
{
	if(q->front == -1 || (q->front>q->back)) return true ; 
	return false ; 
}
