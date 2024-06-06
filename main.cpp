#include <iostream>
#include <string>

using namespace std;

void print_card(int card) {
	string num_card = to_string(card);
	int width = num_card.length() + 4;
	for (int i = 0; i < width; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "* " << num_card << " *" << endl;

	for (int i = 0; i < width; i++) {
		cout << "*";
	}
	cout << endl;
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	print_card(num);

	system("pause");
	return 0;
}