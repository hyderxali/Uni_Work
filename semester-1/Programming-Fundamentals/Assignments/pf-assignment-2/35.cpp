#include <iostream>
using namespace std;
int main() {
	int input;
	cout << "Enter a number between 0 to 9:";
	cin >> input;

	if (input == 0) {
		cout << "Zero";

	} else if (input == 1) {
		cout << "One";

	} else if (input == 2) {
		cout << "Two";

	} else if (input == 3) {
		cout << "Three";

	} else if (input == 4) {
		cout << "Four";

	} else if (input == 5) {
		cout << "Five";

	} else if (input == 6) {
		cout << "Six";

	} else if (input == 7) {
		cout << "Seven";

	} else if (input == 8) {
		cout << "Eight";

	} else if (input == 9) {
		cout << "Nine";

	} else {
		cout << "We don't have word representation for that number";
	}
}
