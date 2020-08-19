#include<iostream>
#include<cstring>

using namespace std;

class Books {
	public:
		Books() {
		}
		~Books() {
		}
		void setId(int x) {
			id = x;
		}
		int getId() {
			return id;
		}
	private:
		int id;
};

int main() {
	Books book1;
	Books *book = &book1;
	
	book1.setId(100);
	cout << book1.getId() << endl;

	book->setId(200);
	cout << book->getId() << endl;

	(*book).setId(300);
	cout << (*book).getId() << endl;

	return 0;
}
