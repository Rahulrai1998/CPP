// SOLVE THIS PROBLEM USING STRING 


#include<iostream>
using namespace std;

void maxWord( char arr[] , int n)
{
	int i=0 , curLen=0 , maxLen=0;

	while(1)
	{
		cout << arr[i] << " " ;
		if(arr[i] == ' ' or arr[i]=='\0')
		{
			if(curLen > maxLen) maxLen = curLen;
			curLen=0;
		}
		else curLen++ ; 
		if(arr[i]=='\0') break;
		i++;
	}
	cout << maxLen << endl;

	return;


}

int main()
{
	int n;
	cin >> n ; 
	cin.ignore(); //CLEAR INPUT BUFFER
	char arr[n];
	cin.getline(arr , n); 
 //CLEAR INPUT BUFFER
	cout << arr << endl;
 
	maxWord(arr , n);

	
	return 0;
}
