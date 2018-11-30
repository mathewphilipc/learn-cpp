#include <iostream>
using namespace std;

// Base class
class Shape {
	public:
		void setWidth(int w) {
			width = w;
		}
		void setHeight(int h) {
			height = h;
		}
	protected:
		int width;
		int height;
};

// Derived class
class Rectangle: public Shape {
	public:
		int getArea() {
			return (width * height);
		}
};

int main(void) {
	Rectangle Rect;
	int input_height;
	int input_width;
	cout << "Pick a height:\nHeight = ";
	cin >> input_height;
	cout << "Pick a width:\nWidth = ";
	cin >> input_width;
	Rect.setWidth(input_width);
	Rect.setHeight(input_height);

	cout << "Result:\nTotal area = " << Rect.getArea() << endl;

	return 0;
}