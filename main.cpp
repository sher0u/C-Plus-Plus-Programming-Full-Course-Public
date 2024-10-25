#include <iostream>

// Search an element in array

int main() {
    int Numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(Numbers) / sizeof(Numbers[0]);
    int number;
    bool found = false; // To track if the number was found

    std::cout << "Enter the number you're searching for from 1 to 10: " << std::endl;
    std::cin >> number;

    for (int i = 0; i < size; i++) {
        if (Numbers[i] == number) {
            std::cout << "Number found: " << Numbers[i] << std::endl;
            found = true; // Set found to true
            break; // Exit the loop since we found the number
        }
    }

    if (!found) {
        std::cout << "Number not found." << std::endl; // Only print if not found
    }

    return 0;
}
