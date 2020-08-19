#include<iostream>
#include<cstring>

using namespace std;

// Polymorphism: means having many forms. The ability of a message to be displayed in more than one form.
//
class shape {
	public:
		void setValues(int a, int b) {
			width = a;
			height = b;
		}
	protected:
		int height;
		int width;
};

class rectangle : public shape {
	public:
		int area() {
			return (height * width);
		}
};

class triangle : public shape {
	public:
		int area() {
			return (height * width / 2);
		}
};

int main() {
	rectangle rect;
	triangle tri;
	// Polymorphism application
	shape *poly1 = &rect;
	shape *poly2 = &tri;

	poly1->setValues(15, 10);
	poly2->setValues(15, 10);

	std::cout << "Rectangle area: " << rect.area() << endl;
	std::cout << "Triangle area: " << tri.area() << endl;

	return 0;
}
