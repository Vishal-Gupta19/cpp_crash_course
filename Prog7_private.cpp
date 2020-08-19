#include<iostream>
#include<cstring>

using namespace std;

class MyClass {
	// friend is used to use the private member of this class in another class
	friend class MyAnotherClass;
	private:
		int secret = 10;
};

class MyAnotherClass {
	public:
		void showSecret(MyClass mc) {
			mc.secret++;
			std::cout << mc.secret << std::endl;
		}
};

int main() {

	MyAnotherClass mac;
	MyClass mc;

	mac.showSecret(mc);

	return 0;
}
