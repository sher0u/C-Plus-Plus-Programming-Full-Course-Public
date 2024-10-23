#include <iostream>

// Logical operator
//   && = check if the two condition are true
//   || = check if at least one of two condition is true
//   ! = reserves the logical state of its operand(not)



int main() {

    int temp;
    bool sunny = false;

    std::cout << "Please enter a temerature: ";
    std::cin >> temp;
    std::cout << std::endl;


    if (temp > 20 && temp <30) { // using the logical and:
        std::cout << "Today you can walk"<<std::endl;
    }
    if (temp < 10 || temp >20) { // using  the logical or;
        std::cout << "Today you can walk too";
    }

    if (!sunny == true) { // using the reverse logical operator
        std::cout << "its good baby";
    }




    return 0;
}
