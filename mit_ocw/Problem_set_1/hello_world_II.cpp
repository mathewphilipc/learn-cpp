#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "How many times?\n";
	cin >> n;
	const char * greeting = "Hello, World!";
	for (int i = 0; i < n; i++) {
		cout << greeting << endl;
	}
}