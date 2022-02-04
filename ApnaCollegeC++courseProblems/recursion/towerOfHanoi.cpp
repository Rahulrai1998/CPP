// Tower of Hanoii
#include<iostream>
using namespace std;
void tower(int n , char src , char dest , char helper)
{
	if(n==0) return;
	tower(n-1 , src , helper , dest);
	cout << " Move from " << src << " to " << dest << endl;
	tower(n-1 , helper , dest , src );	
}
int main()
{
	tower(10 , 'A' , 'C' , 'B');	
	return 0 ;
}



/*
If there are n discs to move from A to C , then
 - Move n-1 Discs from A to B using C (Recursive Call)
- Move the single Disc from A to C
- Move n-1 Disc from B to C using A (Recursive Call)

*/