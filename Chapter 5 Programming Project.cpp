//This program generates a random number from 1-100, and the player must guess what that nunber is
//If the guess is too low, you need to try again, same thing with a too high. until you get the number and then outputs
//the number of guesses.
#include <iostream>
#include <cmath>
#include <random>

using namespace std;


int main()
{
    //creates the random engine
    random_device engine;
    //creates the diceValue() function to get a number from 1-100
    uniform_int_distribution<int>diceValue(1, 100);
    //gets the random number to guess
    int answer = diceValue(engine), guessCount = 0, guess;

    //introduces the game
    std::cout << "Pick the number I have chosen from 1 to 100\n";

    do {
        std::cout << "Guess: ";//enter guess
        std::cin >> guess;
        guessCount++; //counts number of guesses

        if (guess > answer) { //guess is too high
            cout << "Too high, try again :(\n";
        }
        else if (guess < answer) { //guess is too low
            cout << "Too low, try again :(\n";
        }
        else { //correct guess
            cout << "That's right! You guessed it in " << guessCount << " tries :)\n";
        }

    } while (guess != answer);

    return 0;
}
