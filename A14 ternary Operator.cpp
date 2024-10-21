#include <iostream>

//ternary Operator
//Is a replacement for if/else statment
//Syntax condition ? expression 1:expression2;


int main() {
    int age;
    std::cin >> age;
    age >=18 ?std::cout << "Bigger" <<std::endl : std::cout << "Go drink Milk" << std::endl;

    return 0;
}
