//This code produces a bar chart for the population growth of a town.
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    //initializes variables
    string fileName, townName;
    int popFigure, year = 1900;

    //creates file object
    ifstream inputFile;
    //querying file name
    std::cout << "Enter the full name of a valid file (ex:file.txt): ";
    //assign name to fileName and attempts to open the file
    std::cin >> fileName;
    inputFile.open(fileName);
    //validating if the file is open/exists
    if (!inputFile.is_open()) {
        std::cout << "Error, file name incorrect or nonexistent.";
        return 0;
    }
    cin.ignore();
    //query the name of town & assign it to variable
    std::cout << "Enter the name of the town: ";
    getline(cin, townName); // get the entire name of town
    //header for bar chart
    std::cout << townName << " Population Growth\n (each * represents 1,000 people)\n";
    //reading document
    while (inputFile >> popFigure) {
        std::cout << year << " ";//outputs the year first
        for (int i = 0; i < (popFigure / 1000); i++) {//iterates through each number / 1000
            std::cout << "*"; //outputs an asterisk for every 1000 people
        }
        std::cout << endl;//return to next line
        year += 20; //adds 20 years for next entry
    }





    return 0;
}
