#include <iostream>
#include <string>

using namespace std;

bool sum_dil_for_u(int n) {
	if (n <= 0) {
		return false;
	}
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum == n;
}

bool print_num_in_arr(int a, int b) {
	for (int i = a; i <= b; i++) {
		if (sum_dil_for_u(i)) {
			cout << i << " ";
		}
		
	}
}



int main() {
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	cout << "The numbers in the range [" << num1 << ", " << num2 << "] that are equal to the sum of their divisors are: ";
	print_num_in_arr(num1, num2);


	system("pause");
	return 0;
}