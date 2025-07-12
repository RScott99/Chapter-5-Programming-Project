//The purpose of this prorgram is to predict the size of a population of organisms
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    //Initilizing Variables
    int days;
    double currentPopulation, growthRate;

    //querying for popSizeInitial
    std::cout << "Enter the initial population: ";
    std::cin >> currentPopulation;
    //validating popSizeInitial is not less than 2
    while (currentPopulation < 2) {
        std::cout << "Please enter an integer greater than 1: ";
        std::cin >> currentPopulation;
    }
    //querying growthRate
    std::cout << "Enter the average growth rate (percentage): ";
    std::cin >> growthRate;
    //validating growthRate is not negative
    while (growthRate < 0) {
        std::cout << "Please enter a positive percentage: ";
        std::cin >> growthRate;
    }
    //making growthRate percent into decimal
    growthRate /= 100.0;
    //querying number of days.
    std::cout << "Enter the number of days to multiply: ";
    std::cin >> days;
    //validating that days is not < 1
    while (days < 1) {
        std::cout << "Please enter a value greater than 1: ";
        std::cin >> days;
    }
    //outputing day 0 pop.
    std::cout << "Population Size on day 0: " << currentPopulation << endl;
    //iterating all days and outputting each one
    for (int i = 1; i <= days; i++) {
        currentPopulation *= (1.0 + growthRate);
        std::cout << "Population Size on day " << i << ": " << currentPopulation << endl;
    }
    
    return 0;
}
