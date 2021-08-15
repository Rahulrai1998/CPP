#include<iostream>
#define MAX 5 
using namespace std;

class que{
	public:
	int arr[MAX];
	int front , rear ; 
	que(){
		front  = rear = -1 ; 
	}
};

bool empty(que*);
bool full(que*);
int peek(que*);
void enQue(que*,int);
void deQue(que*);
 
int  main()
{
	que *q = new que();
	enQue(q,5);
	enQue(q,6);
	enQue(q,7);
	enQue(q,8);
	enQue(q,9);
	cout << peek(q) << endl;
	deQue(q);
	cout << peek(q) << endl ; 
	enQue(q,4);
	cout << peek(q) << endl ;
	return 0 ; 
}
bool empty(que *q)
{
	if(q->front==-1 and q->rear == -1) return true;
	else return false ; 
}
bool full(que *q)
{
	if((q->front==0 and q->rear == MAX-1) or q->front == q->rear +1) return true;
	else return false;
}
int peek(que *q)
{
	if(empty(q))
	{
		cout << "UNDERFLOW" <<endl ; 
		return -9999 ; 
	}
	return q->arr[q->front] ; 
}
void enQue(que *q , int n)
{
	if(full(q))
	{
		cout << "OVERFLOW" <<endl;
		return  ; 
	}
	if(empty(q))
	{
		q->front = q->rear = 0 ; 
	}
	else if(q->rear == MAX - 1) q->rear = 0 ;
	else q->rear++ ; 
	q->arr[q->rear] = n;
	return ;
}
void deQue(que *q)
{
	if(empty(q))
	{
		cout << "UNDERFLOW" <<endl; 
		return ; 
	}
	if(q->front == q->rear)
	{
		q->front = q->rear = -1 ; 
	}
	else if(q->front == MAX - 1) q->front = 0 ; 
	else q->front++ ; 
	return ;
}