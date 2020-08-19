#include<iostream>
#include<cstring>

using namespace std;

class Books {
	public:
		// Setter
		void setName(string x) {
			name = x;
		}
		// Getter
		string getName() {
			return name;
		}
	// Declare member variables as private
	private:
		string name;
};

int main() {
	Books book;
	book.setName("C++ tutorials");
	cout << book.getName() << endl;
	
	
	return 0;
}
