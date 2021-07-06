#include<iostream>
#include<algorithm>
#define MAX 100
using namespace std;

class stack{
	int tp ; 
	public:
	char arr[MAX] ; 
	stack(){tp = -1;}
	bool empty();
	bool full();
	char top();
	void pop();
	void push(char); 
};

bool stack::empty(){return tp == -1;}
bool stack::full(){return tp == MAX-1;}
void stack::push(char c)
{
	if(full())
	{
		cout << "OVERFLOW" <<endl;
		return ; 
	}
	arr[++tp] = c ; 
	return ; 
}
void stack::pop()
{
	if(empty())
	{
		cout <<"UNDERFLOW"<<endl;
		return;
	}
	tp-- ; 
	return;
}
char stack::top(){
	if(empty())
	{
		cout << "UNDERFLOW" <<endl;
		return -9;
	}
	return arr[tp];
}
int getPreced(char c)
{
	if(c=='^') return 3 ; 
	else if(c=='*'||c=='/') return 2;
	else if(c=='+'||c=='-') return 1;
	else return -1;
}
string getPrefix(string s)
{
	reverse(s.begin(),s.end());
	stack stk ; 
	string pre ; 
	for(int i=0 ; i < s.length() ; i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) pre+=s[i];
		else if(s[i]==')') stk.push(s[i]);
		else if(s[i]=='(')
		{
			while(!stk.empty() && stk.top()!=')')
			{
				pre+=stk.top();
				stk.pop();
			}
			if(!stk.empty()) stk.pop();
		}
		else
		{
			while(!stk.empty() && (getPreced(s[i]) <=getPreced(stk.top())))
			{
				pre+=stk.top();
				stk.pop();
			}
			stk.push(s[i]);
		}
	}
	while(!stk.empty())
	{
		pre+=stk.top();
		stk.pop();
	}
	reverse(pre.begin(),pre.end());
	return pre ; 

}

int main()
{
	cout << getPrefix("(a-b/c)*(a/k-l)")<<endl;
	return 0;
}

/*
Time-complexity : O(n) , n is the string length . 
Approach:-
- first reverse the given string and consider '(' as ')' and ')' as '(' and then get the postfix with same reversed string
- After getting the postfix do once more reverse and it would be the final prefix
*/