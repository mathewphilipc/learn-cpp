#include <iostream>
using namespace std;


// first base class
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

// second base class
class ThingToPaint {
	public:
		int getCost(int area) {
			return area * 70;
		}
};

// derived class
class Rectangle: public Shape, public ThingToPaint {
	public:
		int getArea() {
			return (height * width);
		}
};



int main(void) {
	Rectangle Rect;
	Rect.setHeight(7);
	Rect.setWidth(3);
	int area = Rect.getArea();
	int cost = Rect.getCost(area);

	cout << "Total area = " << area << endl;
	cout << "Total cost = $" << cost << endl;
	return 0;
}