#include <bits/stdc++.h>
using namespace std;

void mergeWayOne(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int lenFirst = mid - s + 1, lenSecond = e - mid;

    // CREATE TWO DYNAMIC ARRAYS
    int *firstArray = new int[lenFirst];
    int *secondArray = new int[lenSecond];

    // COPY EACH HALVES ELEMENTS IN ABOVE ARRAYS
    int arrIndex = s;
    for (int i = 0; i < lenFirst; i++)
    {
        firstArray[i] = arr[arrIndex++];
    }
    arrIndex = mid + 1;
    for (int i = 0; i < lenSecond; i++)
    {
        secondArray[i] = arr[arrIndex++];
    }

    // SORT AND MERGE ABOVE ARRAYS
    // USING MERGE 2 SORTED ARRAY ALGO
    int indexOne = 0, indexTwo = 0;
    arrIndex = s;
    while (indexOne < lenFirst && indexTwo < lenSecond)
    {
        if (firstArray[indexOne] < secondArray[indexTwo])
            arr[arrIndex++] = firstArray[indexOne++];
        else
            arr[arrIndex++] = secondArray[indexTwo++];
    }

    while (indexOne < lenFirst)
    {
        arr[arrIndex++] = firstArray[indexOne++];
    }
    while (indexTwo < lenSecond)
    {
        arr[arrIndex++] = secondArray[indexTwo++];
    }
    //MEMORY DE-ALLOCATION
    delete []firstArray;
    delete []secondArray;
}

void mergeSort(int *arr, int s, int e)
{

    // BASE CASE
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    // SORT LEFT AND RIGHT SUB-ARRAY
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    // MERGE BOTH SORTED SUB-ARRAYS
    mergeWayOne(arr, s, e);
}

int main()
{
    int arr[7] = {2, 5, 1, 6, 9, 0, 8};
    int n = 7;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}