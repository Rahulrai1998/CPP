#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    vector<int> stk;
public:
    bool isEmpty()
    {
        return stk.empty();
    }
    void push(int n)
    {
        stk.push_back(n);
    }
    void pop()
    {
        if (!stk.empty())
            cout << "Stack Underflow" << endl;
        else
            stk.pop_back();
    }
    int peek()
    {
        if (!stk.empty())
            return stk.back();
        else
            cout << "Stack Underflow";
    }
};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.pop();
    stack.push(99);
    stack.push(1789);
    cout << stack.peek();
    return 0;
}