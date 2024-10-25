#include <iostream>
#include <cstdlib>
#include <ctime>

// Rock Paper Scissors
char GetuserChoice();
char GetComputerChoice();
void ShowChoices(char choice);
void winner(char player, char computer);

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed for random number generation
    char player;
    char computer;

    player = GetuserChoice();
    std::cout << "Your choice is ";
    ShowChoices(player);

    computer = GetComputerChoice();
    std::cout << "Your computer choice is ";
    ShowChoices(computer);

    winner(player, computer);

    return 0;
}

char GetuserChoice() {
    char player;
    std::cout << "Enter your choice: Rock, Paper, Scissors" << std::endl;
    do {
        std::cout << "Choose one of the following:" << std::endl;
        std::cout << "Rock = r" << std::endl;
        std::cout << "Paper = p" << std::endl;
        std::cout << "Scissors = s" << std::endl;
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player; 
}

char GetComputerChoice() {
    int computerChoice = std::rand() % 3;
    switch (computerChoice) {
        case 0: return 'r';
        case 1: return 'p';
        case 2: return 's';
    }
    return 'r'; // Fallback return value (not needed but good practice)
}

void ShowChoices(char choice) {
    switch (choice) {
        case 'r': std::cout << "Rock" << std::endl; break;
        case 'p': std::cout << "Paper" << std::endl; break;
        case 's': std::cout << "Scissors" << std::endl; break;
    }
}

void winner(char player, char computer) {
    if (player == computer) {
        std::cout << "It's a tie!" << std::endl;
    } else if ((player == 'r' && computer == 's') ||
               (player == 'p' && computer == 'r') ||
               (player == 's' && computer == 'p')) {
        std::cout << "You win!" << std::endl;
               } else {
                   std::cout << "Computer wins!" << std::endl;
               }
}
