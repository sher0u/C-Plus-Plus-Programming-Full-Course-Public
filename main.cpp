#include <iostream>

//Switch case it is a better way then doing else if a lot o times


int main() {

    int month;
    std::cout << "Enter the number of months: ";
    std::cin >> month;

    if (month < 1 || month > 12) {
        std::cout << "Invalid month!\n";
    } else {
        switch (month) {
            case 1:std::cout << "January"; break;
            case 2:std::cout << "February"; break;
            case 3:std::cout << "March"; break;
            case 4:std::cout << "April"; break;
            case 5:std::cout << "June"; break;
            case 6:std::cout << "July"; break;
            case 7:std::cout << "August"; break;
            case 8:std::cout << "September"; break;
            case 9:std::cout << "October"; break;
            case 10:std::cout << "November"; break;
            case 11:std::cout << "December"; break;
            case 12:std::cout << "Brother"; break;
        }
    }
    return 0;
}
