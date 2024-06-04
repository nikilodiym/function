#include <iostream>
#include <string>

using namespace std;

bool isFunction(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (isFunction(num)) {
		cout << num << " is a prime number." << endl;
	}
	else {
		cout << num << " is not a prime number." << endl;
	}

	system("pause");
	return 0;
}