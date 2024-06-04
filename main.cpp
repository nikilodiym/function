#include <iostream>
#include <string>

using namespace std;

bool pos_or_neg(int n) {
	if (n > 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (pos_or_neg(num)) {
		cout << "The number " << num <<" is positive." << endl;
	}
	else {
		cout << "The number " << num << " is negative." << endl;
	}

	system("pause");
	return 0;
}