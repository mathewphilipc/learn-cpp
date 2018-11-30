#include <iostream>
#include <string>
using namespace std;

class printData {
	public:
		void print(int i) {
			cout << "Printing int: " << i << endl;
		}
		void print(double f) {
			cout << "Printing float: " << f << endl;
		}
		void print(char c) {
			cout << "Printing character: " << c << endl;
		}
		void print(string s) {
			cout << "Printing string: " << s << endl;
		}
};

int main(void) {

	printData pd;

	cout << "Let's print some data." << endl;

	pd.print(5);

	pd.print(500.263);

	pd.print('x');

	pd.print("Hello C++");

	return 0;
}