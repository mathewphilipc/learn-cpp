#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i = i + 1) {
		result = result * base;
	}
	return result;
}
int main() {
	int myBase = 3;
	int myExp = 2;
	int threeSquared = raiseToPower(myBase, myExp);
	cout << myBase << "^" << myExp << " = " << threeSquared << "\n";
	return 0;
}