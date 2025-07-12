//The purpose of this prorgram is to predict the size of a population of organisms
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    //Initilizing Variables
    int popSizeInitial, popSizeFinal;
    double days, growthRate;

    //querying for popSizeInitial
    std::cout << "Enter the initial population: ";
    std::cin >> popSizeInitial;
    //validating popSizeInitial is not less than 2
    while (popSizeInitial < 2) {
        std::cout << "Please enter an integer greater than 1: ";
        std::cin >> popSizeInitial;
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
    while (days < 1.0) {
        std::cout << "Please enter a value greater than 1: ";
        std::cin >> days;
    }



    return 0;
}
