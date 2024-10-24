#include <iostream>
#include <ctime>

//Small Project Number Guessing Game


int main() {

    int Number;
    int tries;
    int guess;

    std::srand(time(NULL)); // Initialize random seed

    Number=rand()%10+1;
    tries=0;

    std::cout << " welcome to number guessing game 1 try = 1 dollar " << std::endl;
    std::cout << "Enter How many tries you wanna play:"  << std::endl;
    std::cin >> tries;

    std::cout << "You payed for " <<tries << " tries" << std::endl;
    std::cout <<"Enter you guess from 0 to 10"<< std::endl;
    std::cin >> guess;

    for (int i = 0; i < tries; i++) {
        std::cin >> guess;

        if (guess == Number) {
            std::cout << "Congratulations! You guessed the correct number: " << guess << std::endl;
            break; // End the game if the player guesses correctly
        } else {
            std::cout << "Wrong guess. Try again." << std::endl;
        }
    }
    std::cout << "Game over thanks for playing"<< std::endl;

    return 0;
}
