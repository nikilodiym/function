#include <iostream>
#include <string>

using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
	int base, exponent;
	cout << "Enter base: ";
	cin >> base;

	cout << "Enter exponent: ";
	cin >> exponent;

	int result = power(base, exponent);
	cout << base << " raised to the power of " << exponent << " is " << result << endl;


	system("pause");
	return 0;
}