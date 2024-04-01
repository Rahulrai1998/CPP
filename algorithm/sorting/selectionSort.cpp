#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void selectionSort(vector<int> &a, int n) // n is the length of the array
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            // swap(a[j] < a[i]);
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    vector<int> a = {1, 8, 3, 0, 1};
    selectionSort(a, 5);
    for (auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}