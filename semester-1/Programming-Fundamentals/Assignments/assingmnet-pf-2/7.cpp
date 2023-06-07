#include <iostream>
#include <cctype> // for toupper() function
using namespace std;

int main() {
    int firstNum, secondNum;
    cout << "Enter two integers, where firstNum is less than secondNum:\n";
    cin >> firstNum >> secondNum;
    
    while (firstNum >= secondNum) {
        cout << "Error: firstNum must be less than secondNum.\n";
        cout << "Enter two integers, where firstNum is less than secondNum:\n";
        cin >> firstNum >> secondNum;
    }
    
    cout << "Odd numbers between " << firstNum << " and " << secondNum << " are:\n";
    int i = firstNum;
    while (i <= secondNum) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    
    int sum = 0;
    cout << "Even numbers between " << firstNum << " and " << secondNum << " are:\n";
    i = firstNum;
    while (i <= secondNum) {
        if (i % 2 == 0) {
            cout << i << " ";
            sum += i;
        }
        i++;
    }
    cout << "\nSum of even numbers: " << sum << endl;
    
    cout << "Numbers and their squares between 1 and 10 are:\n";
    i = 1;
    while (i <= 10) {
        cout << i << " " << i*i << endl;
        i++;
    }
    
    int sumSquares = 0;
    cout << "Sum of squares of odd numbers between " << firstNum << " and " << secondNum << " is:\n";
    i = firstNum;
    while (i <= secondNum) {
        if (i % 2 != 0) {
            sumSquares += i*i;
        }
        i++;
    }
    cout << sumSquares << endl;
    
    cout << "Uppercase letters are:\n";
    char c = 'A';
    while (c <= 'Z') {
        cout << c << " ";
        c = toupper(c+1); // using toupper() function to convert to uppercase
    }
    cout << endl;
    
    return 0;
}

