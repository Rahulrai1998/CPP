#include<iostream>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int> maxheap ;
	maxheap.push(2);
	maxheap.push(6);
	maxheap.push(1);
	maxheap.push(4);
	cout << maxheap.top() << endl;
	
	priority_queue<int , vector<int> , greater<int>> minheap;
	minheap.push(2);
	minheap.push(4);
	minheap.push(1);
	minheap.push(6);
	cout << minheap.top()<< endl;
	
	return 0;
}