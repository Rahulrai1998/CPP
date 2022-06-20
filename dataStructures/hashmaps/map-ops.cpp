#include<iostream>
#include<map>
#include<unordered_map>
#include<iterator>

using namespace std;

int main()
{

	// CREATION
	unordered_map<string,int> m;
	
	//INSERTION
	
	//1
	pair<string,int> p = make_pair("operations",3);
	m.insert(p);
	
	//2
	pair<string,int> p2("operation",1);
	m.insert(p2);
	
	//3
	m["operate"] = 2 ; 

	//SEARCH
	cout << m["operate"] << endl;
	cout << m.at("operate") <<endl;

	cout << m["new"]; // it will make entry with value 0 , if there is not any
	cout<<m.at("new"); // it won't create entry but only print the corresponding value of the provided key
	
	//SIZE
	cout << m.size() << endl; 

	//CHECK PRESENCE OF A KEY
	cout << m.count("operation") << endl ;  // It will give 1 if this key is present else 0
	
	//ERASE A KEY
	m.erase("operate");

	//TRAVERSE THE KEY-VALUE PAIRS
	//1
	for(auto i:m)
		cout << i.first << " " <<i.second << endl;
	
	//2 , using iterators
	 unordered_map<string,int> :: iterator it = m .begin();
	while(it!=m.end()){
		cout << it->first << " " << it->second << endl;
		it++;
	}
	

	return 0;
}