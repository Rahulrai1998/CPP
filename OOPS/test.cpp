#include <iostream>
using namespace std;

double get()
{
    return 10.0 / 2.0;
}

int main()
{
    int a = 10;
    cout << get() << endl;
    
    // // Remove single element
    // v.erase(pos);
    // // Erase range of elements
    // v.erase(first, last); //first is inclusive and last is exclusive

    // // Insert the value 99 before the element at the second index (position 2, which is the value 3)
    // myvector.insert(myvector.begin() + 2, 99);
    // myvector.insert(myvector.begin(), 10); // insert at beginning

    // // Remove the first element
    // if (!nums.empty())
    // {
    //     nums.erase(nums.begin());
    // }
    // priority_queue<int> pq;                            // MAX-HEAP/MAX PRIORITY QUEUE BY-DEFAULT: TOP IS ALWAYS THE MAXIMUM
    // priority_queue<int, vector<int>, greater<int>> pq; // MIN-HEAP/MIN PRIORITY QUEUE: TOP IS ALWAYS THE MINIMUM

    // pq.push(10);
    // pq.push(2);
    // pq.push(20);
    // pq.push(5);
    // pq.push(6);

    // // 20 10 6 5 2 : MAX PQ
    // // 2 5 6 10 20 : MIN PQ

    // cout << pq.size() << " "; // SIZE OF PRIORITY-QUEUE

    // cout << pq.top() << " "; // 10, CURRENT TOP ELEMENT
    // pq.pop();                // REMOVE CURRENT TOP ELEMENT
    // cout << pq.top() << " "; //

    // // TRAVERSE
    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
}