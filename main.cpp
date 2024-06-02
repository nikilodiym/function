#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, K;
	cout << "Enter a height: ";
	cin >> N;
	cout << "Enter a width: ";
	cin >> K;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			if (i == 0 || i == N - 1 || j == 0 || j == K - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}