#include <iostream>
using namespace std;

int main() {
    int popA, popB;
    double growthRateA, growthRateB;
    
    cout << "Enter the population and growth rate of town A:\n";
    cin >> popA >> growthRateA;
    
    cout << "Enter the population and growth rate of town B:\n";
    cin >> popB >> growthRateB;
    
    int years = 0;
    while (popA < popB) {
        popA += popA * (growthRateA/100);
        popB += popB * (growthRateB/100);
        years++;
    }
    
    cout << "After " << years << " years, the population of town A will be greater than or equal to the population of town B.\n";
    cout << "Population of town A: " << popA << endl;
    cout << "Population of town B: " << popB << endl;
    
    return 0;
}

