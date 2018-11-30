#include <iostream>
using namespace std;

int fib(int n) {
	if (n < 3)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int main() {
	cout << "Let's compute the first 10 Fibonacci numbers\n";
	for (int n = 1; n < 11; n = n + 1) {
		int result = fib(n);
		cout << "fib(" << n << ") = " << result << "\n";
	}
	return 0;
}