#include <iostream>

// Small project (Temperature convertor)




int main() {
    double temp;
    char unit;

    std::cout << "A convertor of temperature "<<std::endl;
    std::cout << "Enter temperature unit: ";
    std::cin >> unit;
    std::cout << "Enter temperature value: ";
    std::cin >> temp;

    if (unit == 'C' || unit == 'c') {
        temp = (temp *9/5) +32;
        std::cout << temp << 'f';
    }else if (unit == 'F' || unit == 'f') {
        temp = (temp -32)*5/9;
        std::cout << temp << 'f';
    }

    return 0;
}
