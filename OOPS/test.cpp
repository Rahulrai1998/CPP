#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    // 1. Declaration and Initialization
    set<int> mySet = {30, 10, 20, 10}; // Duplicates (10) are ignored
    set<string> cars = {"Volvo", "BMW", "Ford"};

    // 2. Insertion
    mySet.insert(40); // mySet is now {10, 20, 30, 40}
    cars.insert("Mazda");

    // 3. Iteration (Range-based for loop)
    cout << "Elements in mySet: ";
    for (int element : mySet)
    {c
        cout << element << " "; // Output: 10 20 30 40
    }
    cout << endl;
    

    // 4. Searching for an element
    if (mySet.count(20))
    { // count() returns 1 if found, 0 otherwise
        cout << "20 is in the set" << endl;
    }

    // 5. Deletion
    mySet.erase(20); // Removes the element with value 20
    cout << "Elements after erasing 20: ";
    for (int element : mySet)
    {
        cout << element << " "; // Output: 10 30 40
    }
    cout << endl;

    // 6. Check size and emptiness
    cout << "Size of mySet: " << mySet.size() << endl; // Output: 3
    cout << "Is mySet empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    return 0;
}