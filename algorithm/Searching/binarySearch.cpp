#include <iostream>
using namespace std;
int binarySearch(int *a, int s, int e, int key)
{
	int mid;
	while (s <= e)
	{
		mid = (s + e) / 2;
		if (a[mid] == key)
			return mid;
		else if (key < a[mid])
			e = mid - 2;
		else
			s = mid + 1;
	}
	return -1;
}
int binarySearchRec(int *a, int l, int e, int key)
{
	int mid;
	while (l <= e)
	{
		mid = (l + e) / 2;
		if (key == a[mid])
			return mid;
		else if (key < a[mid])
			return binarySearchRec(a, l, mid - 1, key);
		else
			return binarySearchRec(a, mid + 1, e, key);
	}
	return -1;
}
int main()
{
	int n, key;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Enter the key ";
	cin >> key;
	cout << binarySearch(a, 0, n - 1, key) << endl;
	return 0;
}
