#include<iostream>
#include<cmath>
#include<math.h>
#define MAX 10

using namespace std;

class stack{
	int tp ; 
	public:
	int arr[MAX];
	stack(){tp = -1;}
	bool empty();
	bool full();
	void push(int);
	void pop();
	int top();
};
int postfixEvaluate(string s)
{
	stack stk ; 
	for(int i=0 ; i<s.length();i++)
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
					stk.push(abs(opr1-opr2));
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
				default:
					cout << "ERROR" <<endl;

			}
		}

	}
	return stk.top();
}
int main()
{
	
	cout << postfixEvaluate("57*1+") <<endl;
	return 0;
}
bool stack::empty() {return tp == -1;}  
bool stack::full() {return tp == MAX-1;}
void stack::push(int x)
{
	if(full())
	{
		cout << "OVERFLOW" <<endl;
		return;
	}
	arr[++tp] = x;
	return;
}
void stack::pop()
{
	if(empty())
	{
		cout << "UNDERFLOW" <<endl ; 
		return;

	}
	tp--;
	return;
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







