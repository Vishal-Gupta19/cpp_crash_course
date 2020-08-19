#include<iostream>
#include<cstring>

using namespace std;

// Virtual member function: A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. 
//
class shape {
	public:
		void setValues(int a, int b) {
			width = a;
			height = b;
		}
		// "Pure" Virtual member function: This will make this class abstract. 
		virtual int area() = 0;
		//
		// Virtual Function
		/* (1)
		virtual int area() {
			return 0;
		}
		*/
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
	//shape poly; //(1)
	shape *poly1 = &rect;
	shape *poly2 = &tri;
	//shape *poly3 = &poly; //(1)

	poly1->setValues(15, 10);
	poly2->setValues(15, 10);
	//poly3->setValues(15, 10); //(1)

	std::cout << "Rectangle area: " << rect.area() << endl;
	std::cout << "Triangle area: " << tri.area() << endl;
	//std::cout << "Polygon area: " << poly.area() << endl; //(1)

	return 0;
}
