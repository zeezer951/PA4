#include <iostream> 
#include <cstdlib> 
#include <string> 
#include <fstream>
#include "StringSplitter.h"

using namespace std; 



template <typename K, typename V>


class HashNode {


private:

	K key;
	V value;

	HashNode *next;



public:
	HashNode(const K &key, const V &value) :
		key(key), value(value), next(NULL) {
	}

	K getKey() const {
		return key;
	}

	V getValue() const {
		return value;
	}

	void setValue(V value) {
		HashNode::value = value;
	}

	HashNode *getNext() const {
		return next;
	}

	void setNext(HashNode *next) {
		HashNode::next = next;
	}

};








int main()
{ 
	string line; 
	ifstream infile;  

	StringSplitter str; 


	cout << "please enter name of file" << endl; 
	cin >> line; 

	infile.open(line.c_str);
	
		if(!infile)
		{
			cout << "file could not open" << endl; 
			exit(1); 
		}



	while(infile.good()) 
	{

		str.split(line, " "); 







	}












}