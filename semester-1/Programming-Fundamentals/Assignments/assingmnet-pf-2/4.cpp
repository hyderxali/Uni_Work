#include <iostream>
using namespace std;

float GrowthRate(float birth_rate, float death_rate) {
    if (birth_rate < 0 || death_rate < 0) {
        cout << "Error: Birth rate and death rate must be positive." << endl;
        return -1;
    }
    else {
        return birth_rate - death_rate;
    }
}

float EstimatedPopulation(int starting_population, float growth_rate, int n_years) {
    if (starting_population < 2) {
        cout << "Error: Starting population must be at least 2." << endl;
        return -1;
    }
    else {
        float population = starting_population;
        for (int i = 0; i < n_years; i++) {
            population += (growth_rate/100) * population;
        }
        return population;
    }
}

int main() {
    int starting_population, n_years;
    float birth_rate, death_rate;

    // Get input from user
    cout << "Enter starting population: ";
    cin >> starting_population;
    cout << "Enter birth rate (as a percentage): ";
    cin >> birth_rate;
    cout << "Enter death rate (as a percentage): ";
    cin >> death_rate;
    cout << "Enter number of years: ";
    cin >> n_years;

    // Calculate and display estimated population
    float growth_rate = GrowthRate(birth_rate, death_rate);
    if (growth_rate >= 0) {
        float estimated_population = EstimatedPopulation(starting_population, growth_rate, n_years);
        if (estimated_population >= 0) {
            cout << "Estimated population 1after " << n_years << " years: " << estimated_population << endl;
        }
    }
    
    return 0;
}

