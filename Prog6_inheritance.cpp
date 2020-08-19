#include<iostream>
#include<cstring>

using namespace std;

// Inheritance: "is a" relation
//
class shape {
	public:
		void setValues(int a, int b) {
			width = a;
			height = b;
		}
	// Members in protected can be used in other classes which is inheriting thi class.
	protected:
		int height;
		int width;
};

class description {
	public:
		void print(string desc) {
			std::cout << "We are using " << desc << std::endl;
		}
};

class rectangle : public shape , public description {
	public:
		int area() {
			return (height * width);
		}
};

class triangle : public shape , public description {
	public:
		int area() {
			return (height * width / 2);
		}
};

int main() {
	rectangle rect;
	triangle tri;

	rect.setValues(15, 10);
	tri.setValues(15, 10);

	rect.print("Rectangle class");
	std::cout << "Rectangle area: " << rect.area() << endl;
	tri.print("Triangle class");
	std::cout << "Triangle area: " << tri.area() << endl;

	return 0;
}

/*
 * OUTPUT
 * -----------
 *  We are using Rectangle class
 *  Rectangle area: 150
 *  We are using Triangle class
 *  Triangle area: 75
 */
