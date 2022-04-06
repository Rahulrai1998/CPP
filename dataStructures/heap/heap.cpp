#include<iostream>
using namespace std;
class heap{
	public:
	int arr[100];
	int size;
	
	heap()
	{
		arr[0] = -1;
		size = 0 ; 
	}
	
	void insert(int val)
	{
		size++;
		int index = size , parent; 
		arr[index] = val;
		while(index>1)
		{
			parent  = index/2;
			if(arr[parent]<arr[index])
			{
				swap(arr[parent],arr[index]);
				index = parent ; 
			}
			else return;
		}  
		return;
	}
	void printHeap()
	{
		int i ; 
		for(i=1;i<=size;i++)
			cout << arr[i] << " " ; 
		cout << endl;
	}
	void deleteHeap()
	{
		if(size==0) return;
		
		//step1 : Put last element into first index and delete the last element
		arr[1] = arr[size];
		size-- ; 
		
		//step2: take root node to its correct position
		int i = 1 ; 
		while(i<size)
		{
			int leftIndex = 2*i ; 
			int rightIndex = 2*i+1;
			if(leftIndex < size and arr[i]<arr[leftIndex])
			{
				swap(arr[i],arr[leftIndex]);
				i = leftIndex;
			}
			else if(rightIndex < size and arr[i]<arr[rightIndex])
			{
				swap(arr[i],arr[rightIndex]);
				i = rightIndex;
			}
			else return;
		}
	}

	
};

void heapify(int arr[] , int n , int i) // max-heap
{
	int largest  = i ; 
	int leftIndex = i*2;
	int rightIndex = i*2+1;
		
	if(leftIndex<=n and arr[largest]<arr[leftIndex])
		largest = leftIndex;
	if(rightIndex<=n and arr[largest]<arr[rightIndex])
		largest = rightIndex;
		
	if(largest!=i)
	{
		swap(arr[largest] , arr[i]);
		heapify(arr , n , largest);
	}
}

void heapifyMin(int arr[] , int n , int i)
{
	int smallest  = i , leftIndex  = 2*i , rightIndex  = 2*i+1 ;
	if(leftIndex <=n and arr[smallest] > arr[leftIndex])
		smallest = leftIndex;
	if(rightIndex <= n and arr[rightIndex] < arr[smallest])
		smallest = rightIndex;
	if(smallest != i)
	{
		swap(arr[smallest] , arr[i]);
		heapifyMin(arr , n , smallest);
	} 

}

void heapSort(int arr[] , int n)
{
	int t = n ; 
	while(t>1)
	{
		swap(arr[t] , arr[1]);
		t--;
		heapify(arr , t , 1);
	}
}

int main()
{
	int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50};
	int n = 5 ; 
	for(int i = n/2 ; i>0 ; i--)
		heapify(arr , n , i);
	for(int i = 1 ; i<= n;i++)
		cout << arr[i] << " " ; 
	cout << endl;
	heapSort(arr , n);
	for(int i = 1 ; i<= n;i++)
		cout << arr[i] << " " ; 
	cout << endl;
	return 0;
}