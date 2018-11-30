#include <iostream>

using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

const int pathwidth = 100;
const char tabular = '\t';

int main() {
	double r = 5.0;
	double circumference = 2 * PI * r;

	cout << "radius = " << r << endl;
	cout << "circumference = " << circumference << endl;
	cout << "path width = " << pathwidth << endl;
	cout << "tabular = " << tabular << endl;
	return 0;
}