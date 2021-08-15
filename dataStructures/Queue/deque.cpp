#include<iostream>
#define MAX 5
using namespace std ; 

class deck{
	public:
	int left , right ; 
	int arr[MAX] ; 
	deck(){
		left = right = -1 ; 
	}
	bool empty(){ return left == -1;}
	bool full(){ return (left==0 and right == MAX-1 ) or (left == right+1);}
	void insertLeft(int item)
	{
		if(full())
		{
			cout << "OVERFLOW" <<endl ; 
			return ; 
		}
		if(empty())
		{
			right = left = 0 ; 
		}
		else if(left == 0) left = MAX - 1 ; 
		else left = left-1 ;
		arr[left] = item ;   
		return ;
	}
	void insertRight(int n)
	{
		if(full())
		{
			cout << "OVERFLOW" <<endl;
			return ; 
		}
		if(empty())
		{
			right = left = 0 ; 
		}
		else if(right == MAX-1) {right = 0 ;}
		else {right = right + 1 ;} 
		arr[right] = n ;  
		return ; 
	}
	void deleteLeft()
	{
		if(empty())
		{
			cout << "UNDERFLOW"<< endl;
			return ; 
		}
		if(left == right) { right = left = -1 ; }
		else if(left==MAX-1) left = 0; 
		else left++ ; 
		return ; 
	}
	void deleteRight()
	{
		if(empty())
		{
			cout << "UNDERFLOW" <<endl; 
			return ; 
		}
		if(right == left ) right = left = -1 ; 
		else if(right == 0) right = MAX-1 ; 
		else right-- ;
		return ;  
	}
	int peek() {return arr[left];}
};
int main()
{
	deck deq ; 
	deq.insertLeft(10);
	deq.insertRight(17);
	deq.insertLeft(16);
	cout << deq.peek() <<endl ; 
	deq.deleteLeft();
	cout << deq.peek() <<endl ; 
	deq.deleteRight();
	cout << deq.peek() <<endl;
	return 0 ; 
}