#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    // PARTITION
    int pivot = arr[s], count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    // PLACE PIVOT AT RIGHT POSITION
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // ORDERING ELEMENTS AROUND PIVOT ELEMENT
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}
void quickSort(vector<int> &arr, int s, int e)
{
    // BASE CASE
    if (s >= e)
        return;

    // PARTITON AND SORTING SUBARRAYS
    int pivotIndex = partition(arr, s, e);

    // LEFT SUBARRAY PARTITION
    quickSort(arr, s, pivotIndex - 1);
    // RIGHT SUBARRAY PARTITION
    quickSort(arr, pivotIndex + 1, e);
}

int main()
{
    vector<int> arr = {2, 4, 1, 6, 9};
    int n = 5;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}