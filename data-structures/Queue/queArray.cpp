#include <iostream>
using namespace std;

class Queue
{
private:
	int front, rear, size;
	int *arr;

public:
	Queue(int s)
	{
		size = s;
		front = rear = -1;
		arr = new int[s];
	}

	void enQue(int x)
	{
		if (rear == size - 1)
		{
			cout << "OVERFLOW" << endl;
			return;
		}
		arr[++(rear)] = x;
		if (front == -1)
		{
			front++;
		}
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
			front++;
			// IT WILL FILL THE EMPTY CELL AFTER DELETION
			//
			// for (int i = 0; i < size; i++)
			// {
			// 	arr[i] = arr[i + 1];
			// }
			// rear--;
		}
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
	bool empty()
	{
		if (front == -1 || (front > rear))
			return true;
		return false;
	}
};
int main()
{
	Queue q(10);
	q.enQue(4);
	q.enQue(6);
	q.enQue(5);
	q.enQue(7);
	q.deQue();
	cout
		<< q.peek() << endl;
	q.deQue();
	cout << q.peek() << endl;
	return 0;
}
