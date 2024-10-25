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

#include <iostream>

// For each Loop = loop that eases the traversal over an iterable data set

int main() {
    int Numbers[5]={1,2,3,4,5};
    for (int i : Numbers) {
        std::cout << i << std::endl;
    }

    return 0;
}

#include <iostream>

// Pass Array to fucntion;
double GetTheSomme(double prices[],int size) {
    double sum=0;
    for(int i=0;i<size;i++) {
        sum+=prices[i];
    }
    return sum;
}

int main() {

    double price[5]={43.00,11.00,75.00,342.00,12.00};
    int razmer=0;
    double somme=0;

    razmer=sizeof(price)/sizeof(price[0]);

    somme=GetTheSomme(price,razmer);
    std::cout<<somme;

    return 0;
}
