// Love-babbar : Swap alternate elements or corresponding elements
#include<iostream>
using namespace std;

void printArray(int a[] , int size)
{
	for(int i= 0 ; i<size ; i++)
	{
		cout << a[i] << " " ; 
	}
	cout << endl ; 
	return ; 

}
void swapAltr(int a[] , int size)
{

	for(int i = 0 ; i<size ; i+=2)
	{
		if(i + 1 < size)
			swap(a[i] , a[i+1]);
	}

	return;


}
int main()
{
	int even[] = { 1 , 5 , 9 , 8 , 0 , 7};
	int odd[] = {5 , 8 , 1 , 6 , 9};
	swapAltr(even , 6);
	printArray(even , 6);
	swapAltr(odd , 5);
	printArray(odd , 5);
	return 0;
}
