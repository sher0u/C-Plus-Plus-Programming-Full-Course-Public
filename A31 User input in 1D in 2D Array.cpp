#include <iostream>

int main() {
    //User input of an array 1D;

    int array[5];
    for (int i = 0; i < 5; i++) {
        std::cin >> array[i];
    }
    for (int i = 0; i < 5; i++) {
        std::cout << array[i];
    }
    std::cout << std::endl;

    //User input of an array 2D;
    int Array[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> Array[i][j];
    }
        }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << Array[i][j];

        }
        std::cout << std::endl;
    }
    return 0;
}

