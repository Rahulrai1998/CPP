#include<bits/stdc++.h>
#define STACK 100
using namespace std;

class Stack{
	public:
	int tp ; 
	char array[STACK] ; 
	Stack(){tp = -1 ;}
	void push(char);
	char top();
	void pop();
	bool full();
	bool empty();
};

bool Stack::empty(){return tp == -1 ; }
bool Stack::full(){return tp == STACK-1;}
void Stack::push(char c){
	if(full()){
		cout << "OVERFLOW"<<endl;
		return;
 	}
	array[++tp] = c ;
	return ; 
}
void Stack::pop(){
	if(empty()){
		cout << "UNDERFLOW" <<endl;
		return ; 
	}
	tp-- ; 
	return ; 
}
char Stack::top(){
	if(empty()){
		cout << "UNDERFLOW" << endl;
		return -9; 
	}
	return array[tp] ; 
}

int getPrcd(char c){
	if(c=='^') return 3;
	else if(c=='*'||c=='/') return 2;
	else if(c=='+'||c=='-') return 1;
	else return -1;
}
string getPostfix(string s){
	
	Stack stk ; 
	string post ;
	for(int i = 0 ; i<s.length() ; i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>'A' && s[i]<'Z')) post+=s[i];
		else if(s[i]=='(') stk.push(s[i]);
		else if(s[i]==')'){
			while(!stk.empty() && stk.top()!='('){
				post+=stk.top();
				stk.pop();
			}
			if(!stk.empty()) stk.pop();
		}
		else{
			while(!stk.empty() && (getPrcd(s[i])<=getPrcd(stk.top()))){
				post+=stk.top();
				stk.pop();
			}
			stk.push(s[i]);
		}	
	}
	while(!stk.empty())
	{
		post+=stk.top();
		stk.pop();
	}
	return post ; 
}

int main()
{
	cout << getPostfix("a+b*c+(d*e+f)*g") <<endl ;
	return 0;
}
