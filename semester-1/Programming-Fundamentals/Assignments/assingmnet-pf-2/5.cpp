#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    long number = 0;
    char ch;

    cout << "Enter a number: ";

    // Read up to 6 digits
    for (int i = 0; i < 6; i++) {
        ch = getche();
        if (ch < '0' || ch > '9') {
            cout << endl << "Invalid character. Program will now exit." << endl;
            return 1;
        }
        number = number * 10 + (ch - '0');
    }

    cout << endl << "Number is: " << number << endl;

    return 0;
}

