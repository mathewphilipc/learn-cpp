#include <iostream>
using namespace std;

string even_or_odd(int x) {
	return (x%2 == 0) ? "even" : "odd";	
}

int main() {
	for (int i = 0; i < 10; i++) {
		cout << i << " is " << even_or_odd(i) << endl;
	}
	cout << "hello";
	return 0;
}