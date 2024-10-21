#include <iostream>

//Small project of calculator


int main() {
    char operation;
    double Num1, Num2;
    double Total=0;

    std::cout << "Enter operation code: ";
    std::cin >> operation;
    std::cout << "Enter first number: ";
    std::cin >> Num1;
    std::cout << "Enter second number: ";
    std::cin >> Num2;
    switch (operation) {
        case '+':Total = Num1 + Num2;
        break;
        case '-':Total = Num1 - Num2;
        break;
        case '*':Total = Num1 * Num2;
        break;
        case '/': if (Num2 == 0) {
                std::cout << "Division by 0 Error";
            } else {
                Total = Num1 / Num2;
            }return 0;
        default:std::cout << "Wrong operation code!";
    }
    std::cout << "Your result is:" <<Total;


    return 0;
}
