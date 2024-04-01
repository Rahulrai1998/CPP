// Bubble Sort
#include <bits/stdc++.h>
using namespace std;
void display(vector<int>, int);
void bubbleSort(vector<int> &, int);

void bubbleOpt(vector<int> &a, int n) // Optimized technique , as if the array would be already sorted then it won't make further outer iteartion after first one
{
	int j, i, temp;
	for (i = 1; i < n; i++)
	{
		bool swapped = false;
		for (j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				swapped = true;
			}
		}
		if (swapped == false)
		{
			cout << "Already Sorted" << endl;
			break;
		}
	}
	return;
}
int main()
{

	vector<int> a = {1, 10, 8, 2, 9};

	// bubbleSort(a, a.size());
	// display(a, a.size());
	bubbleOpt(a, a.size());
	display(a, a.size());
	return 0;
}
void display(vector<int> a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return;
}
void bubbleSort(vector<int> &a, int n)
{
	int j, i, temp;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				// temp = a[i];
				// a[i] = a[i + 1];
				// a[i + 1] = temp;
			}
		}
	}
	return;
}