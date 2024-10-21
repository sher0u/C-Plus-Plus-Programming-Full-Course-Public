#include <iomanip>
#include <iostream>

//User Input :
// cout << insertion operator
// cin << extraction operator

int main() {
    int age;
    std::string Name;

    std::cout <<"What is your full name: ";
    std::getline(std::cin >>std::ws, Name);  //>>std::ws used for eliminating the buffer

    // Input for age
    std::cout <<"What is your age: ";
    std::cin >> age;

    // Output results
    std::cout <<"Your age is " << age << " years old." << std::endl;

    return 0;
}
