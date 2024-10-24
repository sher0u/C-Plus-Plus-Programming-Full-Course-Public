#include <iostream>

// while Loop = repeat the instruction while the condition is true
// do while is doing the instruction adn after check the condition



int main() {
    std::cout << "Hello World!\n";
    int age;
    int i=0;
    std::cin >> age;

    while (age < 18) {
        std::cin>>age;
    }

    do {
        std::cout << i << std::endl;
        i++;
    } while (i<5);

    for (int j = 0; j < 3; j++) {
        std::cout << "for" << j << std::endl;
    }

    return 0;
}
