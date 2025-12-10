/*
This is a CLI game where the program creates a random number between a range and the user has to try guess it.
The program will then say higher or lower depending on the guess until the user has gotten the correct answer.
*/

#include <iostream>
#include <cstdlib> // for rand() function

int userGuess;
int count;
int randNum;

//function to return random number between 1 and 100
int randomNumGen()
{
    return rand() % 100 + 1;
}

//gets user input and updates userGuess to the latest input from user. Also 
int userInput()
{
    std::cin >> userGuess;
    return userGuess;
}

int main()
{
    // Get a different random number each time the program runs
    srand(time(0));
    int randNum = randomNumGen();
    int count = 0;

    std::cout << "Welcome to the number guesser game!\n";
    std::cout << "Guess a number between 1 and 100: ";
    userInput();
    count += 1;

    while (userGuess != randNum)
    {
        if (userGuess < randNum)
        {
            std::cout << "The number is higher! Guess again: ";
            userInput();
            count += 1;
        }
        else if (userGuess > randNum)
        {
            std::cout << "The number is lower! Guess again: ";
            userInput();
            count += 1;
        }
    }

    std::cout << "Yay! the correct answer was " << randNum << "\n";
    std::cout << "You got it in " << count << " guesses";
    return 0;
}

