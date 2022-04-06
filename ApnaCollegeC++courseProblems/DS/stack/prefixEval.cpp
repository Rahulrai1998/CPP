#include<iostream>
#include<math.h>
using namespace std;
#define MAX 10 

class stack{
	int tp ;
	public:
	int arr[MAX];
	stack(){tp = -1;}
	bool empty();
	bool full();
	void push(int x);
	void pop();
	int top();
};

bool stack::empty() {return tp == -1 ;} 
bool stack::full() {return tp == MAX-1;}
void stack::push(int x)
{
	if(full())
	{
		cout << "OVERFLOW" << endl ; 
		return;

	}
	tp++ ; 
	arr[tp] = x ; 
	return;

}
void stack::pop()
{
	if(empty())
	{
		cout << "UNDERFLOW" <<endl ; 
		return ; 
	
	}
	tp-- ; 
	return ; 
}
int stack::top()
{
	if(empty())
	{
		cout << "UNDERFLOW" <<endl;
		return -9999;
	
	}
	return arr[tp]; 
}
int prefixEvaluation(string s)
{
	stack stk ;
	for(int i = s.length() - 1 ; i >=0 ; i--)
	{
		if(s[i]>='0' && s[i]<='9') stk.push(s[i] - '0');
		else
		{
			int opr2 = stk.top();
			stk.pop();
			int opr1 = stk.top();
			stk.pop();
			switch(s[i])
			{
				case '+' : 
					stk.push(opr1+opr2);
					break;
				case '-' :
					stk.push(opr1-opr2);
					break;
				case '*' :
					stk.push(opr1*opr2);
					break;

				case '/' :
					stk.push(opr1/opr2);
					break;

				case '^' :
					stk.push(pow(opr1,opr2));
					break;
				default :
					cout << "ERROR" <<endl ; 

			}


		}


	}
	return stk.top();
}

int main()
{
	
	cout << prefixEvaluation("-+7*45+20") << endl;
	return 0;
}


