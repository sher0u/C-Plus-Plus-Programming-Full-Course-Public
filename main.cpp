#include <iostream>

//If statement
//do something is the condition is true if no do the other instruction

int main() {

    int age ;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Welcome ! to Club";
    } else if (age < 18 ) {
        std::cout << "Go drink Milk Baby";
    }
    return 0;
}
