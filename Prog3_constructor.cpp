#include<iostream>
#include<cstring>

using namespace std;

class Books {
	public:
		// Constructor: Initializes objects of a class. It is automatically called when object creates.
		Books(string x) {
			cout << "Constructor is called" << endl;
			setName(x);
		}
		// Destructor: destructs or deletes an object. It is destructs or deletes an object.
		~Books() {
			cout << "Destructor is called" << endl;
		}
		void setName(string x) {
			name = x;
		}
		string getName() {
			return name;
		}
	private:
		string name;
};

int main() {
	Books book1("C++ Turorial");
	cout << book1.getName() << endl;

	Books book2("Py Tutorial");
	cout << book2.getName() << endl;

	return 0;
}

/*
 * OUTPUT:
 * -------------
 * Constructor is called
 * C++ Turorial
 * Constructor is called
 * Py Tutorial
 * Destructor is called
 * Destructor is called
 */
