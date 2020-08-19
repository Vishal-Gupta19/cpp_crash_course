#include<iostream>
#include<cstring>

using namespace std;

class Vector {
	public:
		int x, y;
		Vector() {};
		Vector(int a , int b) {
			x = a;
			y = b;
		}
		// Operator overloading function declaration. Overloading + operator here.
		Vector operator+(const Vector&);
};

Vector Vector::operator+(const Vector& param) {
	Vector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

int main() {
	Vector vec1(4, 2);
	Vector vec2(2, 2);
	Vector result;
	result = vec1 + vec2;

	cout << "Result is : (" << result.x << ", " << result.y << ")" << endl;

	return 0;
}
