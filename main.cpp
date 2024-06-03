#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	
	}
}

int main() {
	int num;

	cout << "Enter the number for calculate the factorial: ";
	cin >> num;

	int result = factorial(num);
	cout << "The factorial of " << num << " is " << result << endl;

	system("pause");
	return 0;
}