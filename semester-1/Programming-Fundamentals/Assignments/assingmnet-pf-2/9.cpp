#include <iostream>
using namespace std;

int main() {
    int numLockers;
    cout << "Enter the number of lockers in the school:\n";
    cin >> numLockers;
    
    // create an array to represent the state of each locker
    bool lockers[numLockers];
    for (int i = 0; i < numLockers; i++) {
        lockers[i] = false; // initialize all lockers to closed
    }
    
    // simulate the game
    for (int student = 1; student <= numLockers; student++) {
        for (int locker = student - 1; locker < numLockers; locker += student) {
            lockers[locker] = !lockers[locker];
        }
    }
    
    // count the number of open lockers
    int numOpenLockers = 0;
    for (int i = 0; i < numLockers; i++) {
        if (lockers[i]) {
            numOpenLockers++;
        }
    }
    
    cout << "Number of lockers that are open: " << numOpenLockers << endl;
    
    return 0;
}

