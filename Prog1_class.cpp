#include<iostream>
#include<cstring>

using namespace std;

// Class: A class is the collection of related data and function under a single name.
class Books {
	// Access specifier: define the accessibility of subsequent members.
	public:
		int id = 20;
		void printBookId() {
			cout << "The book Id is: " << id << endl;
		}
};

int main() {
	Books book;
	book.printBookId();
	
	return 0;
}
