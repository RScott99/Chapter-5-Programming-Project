//This code will output two patterns that are described in the instructions
//they are labelled 'Pattern A' and 'Pattern B'

#include <iostream>
#include <cmath>

using namespace std;


int main()
{    
    std::cout << "Pattern A:\n";//header for pattern a
    for (int i = 1; i <= 10; i++) {//i = what row the patter is on (i=1 is first row) & itterates through until 10
        for (int j = 1; j <= i; j++) {//j = how many asterisks per row. (j=1 is 1 '*')& itterates through until 10
            std::cout << "*";//outputs the asterisk
        }
        std::cout << endl;//returns to next line
    }
    std::cout << "\nPatter B:\n";//header for pattern b
    for (int i = 1; i <= 10; i++) {//same as line 13
        for (int j = 10; j >= i; j--) {//reverse of like 14, so it starts at 10 asterisks and itterates down until 1
            std::cout << "*";//outputs the asterisk
        }
        std::cout << endl;//returns to next line
    }
    return 0;
}
