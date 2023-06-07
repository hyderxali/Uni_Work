#include <iostream>
using namespace std;

int main() {
    int num1, num2, hcf, lcm, smaller;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Find the smaller number of the two
    smaller = (num1 < num2) ? num1 : num2;
    
    // Find the HCF
    hcf = 1;
    for (int i = 1; i <= smaller; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    
    // Find the LCM
    lcm = (num1 * num2) / hcf;
    
    cout << "The HCF of " << num1 << " and " << num2 << " is " << hcf << endl;
    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
    
    return 0;
}

