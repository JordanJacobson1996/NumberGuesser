/*
This is a CLI game where the program creates a random number between a range and the user has to try guess it.
The program will then say higher or lower depending on the guess until the user has gotten the correct answer.
*/

#include <iostream>
#include <cstdlib> // for rand() function

//function to return random number between 1 and 10 to kick off game
int randomNumGen()
{
    return rand() % 10 + 1;
}



int main()
{
    // Get a different random number each time the program runs
    srand(time(0));

    int userGuess; 
    int randNum = randomNumGen();

    std::cout << "Welcome to the number guesser game!\n";
    std::cout << "Guess a number between 1 and 10: ";
    std::cin >> userGuess;

    return 0;
}

