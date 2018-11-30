#include <iostream>
#include <iomanip>

using namespace std;

// define Box data type
class Box {
	public: // accessible from outside the class
		double length;		// box length
		double breadth;		// box breadth
		double height;		// box height
};



int main() {

	cout << "hello world, let's make a box.\n" << endl;
	cout << "How many bytes does a box occupy in memory?" << endl;
	cout << sizeof(Box) << " bytes" << endl;

	// declare two objects of class Box
	Box Box1;
	Box Box2;

	// box 1 specification
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	// volume of box 1
	double volume1 = Box1.height * Box1.length * Box1.breadth;

	// print dimensions
	cout << "\nBox 1 dimensions:" << endl;
	cout << "Height = " << setprecision(1) << std::fixed << Box1.height << endl;
	cout << "Length = " << setprecision(1) << std::fixed << Box1.length << endl;
	cout << "Breadth = " << setprecision(1) << std::fixed << Box1.breadth << endl;
	cout << "Volume = " << setprecision(1) << std::fixed << volume1 << endl;


	return 0;
}