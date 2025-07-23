#include <iostream>
using namespace std;

class CircularQue
{
private:
	int *arr;
	int front, rear, cap;

public:
	CircularQue(int size)
	{
		cap = size;
		front = rear = -1;
		arr = new int[size];
	}
	bool empty()
	{
		if (front == -1)
			return true;
		else
			return false;
	}
	bool full()
	{
		if ((front == 0 && rear == cap - 1) || front == rear + 1)
			return true;
		else
			return false;
	}
	int peek()
	{
		if (empty())
		{
			cout << "UNDERFLOW" << endl;
			return -9999;
		}
		return arr[front];
	}
	void enQue(int n)
	{
		if (full())
		{
			cout << "OVERFLOW" << endl;
			return;
		}

		if (empty())
		{
			front = rear = 0;
		}
		else
		{
			rear = (rear + 1) % cap;
		}
		// else if (rear == cap - 1)
		// 	rear = 0;
		// else
		// 	rear++;
		arr[rear] = n;
		return;
	}
	void deQue()
	{
		if (empty())
		{
			cout << "UNDERFLOW" << endl;
			return;
		}
		if (front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front = (front + 1) % cap;
		}
		// else if (front == cap - 1)
		// 	front = 0;
		// else
		// 	front++;
		return;
	}
};

int main()
{
	CircularQue q(4);
	q.enQue(5);
	q.enQue(6);
	q.enQue(7);
	q.enQue(8);
	q.enQue(9);
	cout << q.peek() << endl;
	q.deQue();
	cout << q.peek() << endl;
	q.enQue(4);
	cout << q.peek() << endl;
	return 0;
}
