//This code is to read the file LineUp.txt and read all names until there are none left
//It will report the number of students in the class, and who is at the front and back of the line
#include <iostream>
#include <string>
#include <fstream>

using namespace std;



int main()
{
    //create file obj and open it
    ifstream inputFile;
    inputFile.open("LineUp.txt");
    //checking to see if file opened correctly
    if (!inputFile.is_open()) {
        std::cout << "Error opening file...";
        return 0;
    }
    //initializes variables
    string currentName, firstInLine, lastInLine;
    int numStudents;
    //reads first name in LineUp.txt and writes it to the currentName variable
    inputFile >> currentName;
    //sets the first and last in line to the first name since it's all we have currently
    firstInLine = currentName;
    lastInLine = currentName;
    //account for this first student
    numStudents = 1;

    //go through every name in the document
    while (inputFile >> currentName) {
        numStudents++;//add each student
        if (currentName < firstInLine) {//if name comes before previous, it is the new first
            firstInLine = currentName;
        }
        else if (currentName > lastInLine) {//if name comes after previous, it is the new last
            lastInLine = currentName;
        }
    }
    //outputs the number of students, first in line, and last in line.
    std::cout << "There are " << numStudents << " in the class.\n";
    std::cout << firstInLine << " would be the first student in line.\n";
    std::cout << lastInLine << " would be the last student in line.\n";


    //Closing file
    inputFile.close();
    return 0;
}
