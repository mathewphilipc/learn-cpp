#include <iostream>
using namespace std;

int main() {
	cout << "Let's compare two numbers.\n";
	int x;
	int y;
	cout << "Give me a number:\nx = ";
	cin >> x;
	cout << "Give me another:\ny = ";
	cin >> y;
	cout << "Comparison results:\n";
	if (x > y)
		cout << "x > y" << "\n";
	else if (y > x)
		cout << "x < y" << "\n";
	else
		cout << "x = y" << "\n";
	return 0;
}