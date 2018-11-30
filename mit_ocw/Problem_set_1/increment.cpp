#include <iostream>
using namespace std;

int main() {
	// print 0 to 4

	cout << "Printing 0 to 4 using i++:" << endl;

	for (int i = 0; i < 5;) {
		cout << i++ << endl;
	}

	// print 1 to 5

	cout << "Printing 1 to 5 using i++:" << endl;

	for (int i = 0; i < 5;) {
		cout << ++i << endl;
	}
}