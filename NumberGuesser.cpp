/*
This is a CLI game where the program creates a random number between a range and the user has to try guess it.
The program will then say higher or lower depending on the guess until the user has gotten the correct answer.
*/

#include <iostream>

int main()
{
    int userGuess; //initialise to use for storing the users guess

    std::cout << "Welcome to the number guesser game!\n";
    std::cout << "Guess a number between 1 and 10: ";
    std::cin >> userGuess;

    return 0;
}

