#include <iostream>
#include <string>

using namespace std;

bool sum_work(int a, int b) {
	int sum = 0;
	for (int i = min(a, b); i < max(a, b); i++) {
		sum += i;
	}
}

int main() {
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	int result = sum_work(num1, num2);
	cout << "The sum of the numbers between " << num1 << " and " << num2 << " is " << result << endl;

	system("pause");
	return 0;
}