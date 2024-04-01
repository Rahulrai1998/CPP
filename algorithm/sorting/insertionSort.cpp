// Insertion Sort

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &a, int n);

int main()
{
	vector<int> a = {2, 7, 4, 8, 10};
	insertionSort(a, a.size());
}

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}
// void insertionSort(vector<int> &a, int n)
// {
// 	int temp, j;
// 	for (int i = 1; i < n; i++)
// 	{
// 		temp = a[i];
// 		j = i - 1;
// 		while (a[j] > temp && j >= 0)
// 		{

// 			a[j + 1] = a[j];
// 			j--;
// 		}
// 		a[j + 1] = temp;
// 	}
// }