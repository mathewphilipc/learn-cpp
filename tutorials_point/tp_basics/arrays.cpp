#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main() {
	int arr[10]; //n is an array of 10 integers
	cout << "hello world" << endl;

	for (int i = 0; i < 10; i++) {
		arr[i] = 100 + i;
	}

	for (int j = 0; j < 10; j++) {
		cout << setw( 7 ) << j << setw( 13 ) << arr[ j ] << endl;
	}

	for (int i = 0; i < 10; i++) {
		cout << "arr[" << i << "] == " << arr[i] << endl;
	}

	return 0;
}