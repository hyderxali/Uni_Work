#include <iostream>
using namespace std;

int main() {
  // Print the upper half of the diamond
  for (int i = 1; i <= 5; i++) {
    // Print the spaces
    for (int j = 5 - i; j > 0; j--) {
      cout << " ";
    }
    // Print the asterisks
    for (int j = 1; j <= (2 * i - 1); j++) {
      cout << "*";
    }
    cout << endl;
  }

  // Print the lower half of the diamond
  for (int i = 4; i >= 1; i--) {
    // Print the spaces
    for (int j = 5 - i; j > 0; j--) {
      cout << " ";
    }
    // Print the asterisks
    for (int j = 1; j <= (2 * i - 1); j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}

