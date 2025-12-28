#include <iostream>
using namespace std;

class Stack
{
    int size;
    int top;
    int *arr;

public:
    Stack()
    {
        top = -1;
        size = 1000;
        arr = new int[size];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == size - 1;
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "OVERFLOW " << endl;
            return;
        }
        top++;
        arr[top] = x;
        return;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW" << endl;
            return -9999;
        }
        int item = arr[top];
        top--;
        return item;
    }
    int Top()
    {
        if (isFull())
        {
            cout << "OVERFLOW" << endl;
            return -9999;
        }
        return arr[top];
    }
};

int main()
{
    Stack stack;
    stack.push(54);
    stack.push(22);
    stack.push(98);
    stack.push(100);
    cout << stack.Top() << endl;
    cout << stack.pop() << endl;
    cout << stack.Top() << endl;
    return 0;
}
