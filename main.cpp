#include <iostream>
#include <string>

using namespace std;

bool cube(int n) {
	return n * n * n;
}

int main() {
	int num;

	cout << "Enter a number: ";
	cin >> num;
	int result = cube(num);
	cout << "The cube of " << num << " is " << result << endl;

	system("pause");
	return 0;
}